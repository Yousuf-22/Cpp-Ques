#include<iostream>
#include<vector>
using namespace std;
int subarray(vector<int> nums, int k) {
        if(k < 0) return 0;

        int l = 0;
        int r = 0;
        int odd = 0;
        int cnt = 0;

        while(r < nums.size()) {
            if(nums[r] % 2) {
                odd++;
            }
            while(odd > k) {
                if(nums[l] % 2) {
                    odd--;
                }
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return subarray(nums,k) - subarray(nums,k-1);
    }
int main() {
    vector<int> arr = {1,1,2,1,1};
    cout << numberOfSubarrays(arr,3);
    return 0;
}