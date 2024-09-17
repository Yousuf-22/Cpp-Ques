#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums) {
    int maxx = INT16_MIN;
    int ans = 0;
    for(int i = 0; i<nums.size(); i++) {
        ans = nums[i] + i;
        maxx = max(maxx,ans);
        if(maxx == nums.size()-1) {
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> arr = {3,2,1,0,4};
    cout << canJump(arr);
    return 0;
}