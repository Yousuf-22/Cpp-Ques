#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int findShortestSubArray(vector<int>& arr) {
    int maxx = INT16_MIN;
    unordered_map<int,int> mpp;
    for(int i : arr) {
        mpp[i]++;
    }        
    for(auto it : mpp) {
        if(maxx < it.second) {
            maxx = max(maxx,it.second);
        }
    }
    int i = 0;
    while(i == maxx) {
        if(arr[i] == )
    }
}
int main() {
    vector<int> arr = {1,2,2,3,1};
    findShortestSubArray(arr);
    return 0;
}