#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int,int> mpp;
    vector<int> ans;

    for(int x : arr) {
        arr[x]++;
    }
    for(int i = 0; i<arr.size(); i++) {
        if(mpp.find(target - arr[i]) != mpp.end()) {
            if((target - arr[i])+arr[i] == target) {
            ans.push_back((target-arr[i]));
            ans.push_back(arr[i]);
            }
        }
    }

    for(int i : ans) {
        cout << i << " ";
    }
}
int main() {
    vector<int> arr = {2,7,11,15};
    twoSum(arr,9);
    return 0;
}