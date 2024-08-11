#include<iostream>
#include<vector>
using namespace std;
int numSubarraysWithSum(vector<int>& nums, int goal) {
    int l = 0;
    int r = 0;
    int sum = 0;
    int ans = 0;
    if(goal < 0) return 0;
    while(r <= nums.size()) {
        sum += nums[r];
        if(sum <= goal) {
            ans = ans + (r-l+1);
            r++;
        }
        while(sum > goal) {
            sum = sum - nums[l];
            l++;
        }
        r++;
    }
    return ans;
    }
int main() {
    vector <int> arr = {0,0,0,0,0};
    cout << numSubarraysWithSum(arr, 2);
    return 0;
}