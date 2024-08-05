#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int duplicateNumbersXOR(vector<int>& nums) {
    unordered_map<int,int> mpp;
    for(int i : nums) {
        mpp[i]++;
    }
    int ans = 0;
    for(auto it: mpp) {
        if(it.second == 2 ) {
            ans += it.first;
        }
    }
    if(ans == 0) return 0;
    return ans;
}   
int main() {
    vector<int> nums = {10,18,7,10,18};
    cout << duplicateNumbersXOR(nums);
    return 0;
}