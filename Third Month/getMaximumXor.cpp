#include<iostream>
#include<vector>
using namespace std;
vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
    int xorr = 0;

    for(int i = 0; i<nums.size(); i++) {
        xorr ^= nums[i];
    }
    xorr ^= maximumBit;
    cout << xorr;
}
int main() {    
    vector<int> arr = {0,1,1,3};
    getMaximumXor(arr,2);
return 0;
}