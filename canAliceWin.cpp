#include<iostream>
#include<vector>
using namespace std;
bool canAliceWin(vector<int>& nums) {
    int ssum;
    int gsum;
    for(int i = 0; i<nums.size(); i++) {
        if(nums[i] > 9) {
            gsum += nums[i];
        }
        else ssum += nums[i];
    }
    if(ssum == gsum) return false;
    return true;
}
int main() {
    vector<int> arr = {};
    return 0;
}