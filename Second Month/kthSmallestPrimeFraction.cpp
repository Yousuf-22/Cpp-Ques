#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    priority_queue<pair<double, pair<int,int>>> maxx;


    vector<int> ans;
    for(int i = 0; i<arr.size(); i++) {
        for(int j = i+1; j<arr.size(); j++) {
            double val = ((double)arr[i]/(double)arr[j]);
            maxx.push({val,{arr[i],arr[j]}});

            if(maxx.size() > k) {
                maxx.pop();
            }
        }
    }         

    int x = maxx.top().second.first;
    int y = maxx.top().second.second;

    ans.push_back(x);
    ans.push_back(y);

    return ans;
}
int main() {
    vector<int> arr = {1,29,47};
    vector<int> ans = kthSmallestPrimeFraction(arr,1);

    for(int i : ans) {
        cout << i << " ";
    }

    return 0;
}