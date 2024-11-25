#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    vector<int> arr = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> mpp;
    vector<int> ans;
    for(int i = 0; i<arr.size(); i++) {
        int diff = target - arr[i];
        if(mpp.find(diff) != mpp.end()) {
            ans.push_back(mpp[diff]);
            ans.push_back(i);
        }
        mpp[arr[i]] = i;
    }
    for(auto i: ans) {
        cout << i << " ";
    }
    return 0;
}