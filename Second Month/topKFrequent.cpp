#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mpp;
    priority_queue<pair<int,int>, vector<pair<int,int>>, 
    greater<pair<int,int>>> minheap;
    vector<int> ans;
    for(int i : nums) {
        mpp[i]++;
    }

    for(auto it : mpp) {
        minheap.push({it.second, it.first});

        if(minheap.size() > k) {
            minheap.pop();
        }
    }
    while(!minheap.empty()) {
        ans.push_back(minheap.top().second);
        minheap.pop();
    }
    return ans;
}
int main() {
    vector<int> arr = {1,1,2,2,3,3};
    vector<int> ans = topKFrequent(arr,2);

    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}