#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProductDifference(vector<int>& nums) {

    sort(nums.begin(),nums.end()); 
    return (nums[nums.size()-1] * nums[nums.size()-2]) - (nums[0] * nums[1]);
}
int main() {
    vector<int> nums = {4,2,5,9,7,4,8};
    cout << maxProductDifference(nums);

return 0;
}