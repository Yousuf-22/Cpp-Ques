#include<iostream>
#include<vector>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {

    int i = 0;
    int j = 0;

    int sum = 0;
    int ans = INT16_MAX;
    while(j < nums.size()) {
        sum = sum + nums[j];

        if(sum >= target) {
            ans = min(ans,(j-i+1));
        }

        while(sum > target) {
            sum = sum - nums[i];
            i++;
            if(sum >= target) {
                ans = min(ans,(j-i+1));
            }
        }
        if(ans == 1) {
            return ans;
        }
        j++;
    }
    return (ans == INT16_MAX) ? 0 : ans;
}
int main() {
    vector<int> arr = {1,1,4};
    cout << minSubArrayLen(1,arr);
    return 0;
}