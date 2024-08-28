#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int> topKfrequentNum(vector<int>& arr, int k) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;

    unordered_map<int,int> mpp;

    for(int i : arr) {
        mpp[i]++;
    }
    
    for(auto it : mpp) {

        minheap.push({it.second, it.first});

        if(minheap.size() > k) {
            minheap.pop();
        }
    }
    while(!minheap.empty()) {
        cout << minheap.top().first << " " << minheap.top().second << endl;
        minheap.pop();
    }
}
int main() {
    vector<int> arr = {1,1,1,3,2,2,4};
    topKfrequentNum(arr,2);
    return 0;
}