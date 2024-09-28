#include<iostream>
#include<vector>
using namespace std;
int longestSubarray(vector<int>& nums) {

    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = 0;
    if(nums.size() == 1 and nums[0] == 1) return 1;

    while(j < nums.size()) {
        sum += nums[j];
        if(((j-i+1) - sum) <= 1) {
            ans = max(ans,(j-i+1)-1);
        }
        while (((j-i+1) - sum) > 1) {
            sum -= nums[i];
            i++;
        }
        j++;
    }        
    return ans;
}
int main() {
    vector<int> arr = {0};
    cout << longestSubarray(arr);
    return 0;
}