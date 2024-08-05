#include<iostream>
#include<vector>
using namespace std;
int numSubarraysWithSum(vector<int>& nums, int goal) {
    int l = 0;
    int r = 0;
    int sum = 0;
    int ans = 0;

    while(r <= nums.size()) {
        sum += nums[r];
        if(sum <= goal) {
            ans++;
        }
        if(sum > goal) {
            sum = sum - nums[l];
            l++;
        }
        r++;
    }
    return ans;
    }
int main() {
    vector <int> arr = {1,0,1,0,1};
    cout << numSubarraysWithSum(arr, 2);
    return 0;
}