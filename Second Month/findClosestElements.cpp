#include<iostream>
#include<vector>
#include <cstdlib>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    priority_queue<pair<int,int>> maxx;
    vector<int> ans;

    for(int i = 0; i< arr.size(); i++) {
        maxx.push({abs(arr[i] - x), arr[i]});

        if(maxx.size() > k) {
            maxx.pop();
        }
    }
    while(!maxx.empty()) {
        ans.push_back(maxx.top().second);
        maxx.pop();
    }

    sort(ans.begin(),ans.end());

    return ans;
}
int main() {
    vector<int> arr = {-2,-1,1,2,4,5};
    vector<int> ans = findClosestElements(arr,3,3);

    for(int i : ans) {
        cout << i << " " ;
    }
    return 0;
}