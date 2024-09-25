#include<iostream>
#include<vector>
using namespace std;
int longestOnes(vector<int>& nums, int k) {

    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = 0;

    while(j < nums.size()) {
        sum += nums[j];

        if(((j-i+1)-sum) <= k) {
            ans = max(ans,(j-i+1));
        }
        while(((j-i+1)-sum) > k) {
            sum -= nums[i];
            i++;
        }
        j++;
    }  
    return ans;  
}
int main() {
    vector<int> arr = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    longestOnes(arr,3);
    return 0;
}