#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    priority_queue<pair<int, pair<int,int>>> maxx;
    vector<pair<int,int>> prr;

    vector<int> ans;
    for(int i = 0; i<arr.size(); i++) {
        for(int j = i+1; j<arr.size(); j++) {
            prr.push_back({arr[i],arr[j]});
        }
    }        

    for(int i = 0; i<prr.size(); i++) {
        double x = prr[i].first;
        double y = prr[i].second;
        int ans  = (x/y)*10;
        maxx.push({ans,{prr[i].first,prr[i].second}});

        if(maxx.size() > k) {
            maxx.pop();
        }
    }

    int x = maxx.top().second.first;
    int y = maxx.top().second.second;

    ans.push_back(x);
    ans.push_back(y);

    return ans;
}
int main() {
    vector<int> arr = {1,13,17,59};
    vector<int> ans = kthSmallestPrimeFraction(arr,6);

    for(int i : ans) {
        cout << i << " ";
    }

    return 0;
}