#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int n = nums.size() - 1;

    int total  = (n*(n+1))/2;
    int sum = 0;
    int maxx = INT16_MIN;
    for(int i = 0; i<nums.size(); i++) {
        sum += nums[i];
        if(nums[i] > maxx) {
            maxx = nums[i];
        }
    }        
    return (maxx != n) ? maxx : (sum - total);
}
int main() {
    vector<int> arr = {1,4,4,2,4};
    cout << findDuplicate(arr);
    return 0;
}