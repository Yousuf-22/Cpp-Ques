#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    map<int,int> mpp;
    sort(nums.begin(), nums.end());
    int j = 0;
    for(int i = 1; i<nums.size()+1; i++) {
        mpp[i];
    }
    vector <int> ans;
    for(int i : nums) {
        if(mpp[i] != nums[i]) {
            ans.push_back(mpp[i]);
        }   
    }
    for(int i : ans) {
        cout << i << " ";
    }
}
int main() {
    vector<int> arr = {4,3,2,7,8,2,3,1};
    findDisappearedNumbers(arr);
    return 0;
}