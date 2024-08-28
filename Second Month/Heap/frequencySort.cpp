#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int> frequencysort(vector<int>& arr) {
    priority_queue<pair<int,int>> maxx;

    unordered_map<int,int> mpp;

    for(int i : arr) {
        mpp[i]++;
    }

    for(auto it : mpp) {
        maxx.push({it.second, it.first});
    }

    while(!maxx.empty()) {
        cout << maxx.top().second << " ";
        maxx.pop();
    }
}
int main() {
    vector<int> arr = {1,1,1,3,2,2,4};
    frequencysort(arr);
    return 0;
}