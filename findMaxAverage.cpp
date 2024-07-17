#include<iostream>
#include<vector>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
    int l = 0;
    int r = 0;
    double sum = 0;
    double maxavg = INT16_MIN;

    if(nums.size() == 1) return nums[0];

    while(r < nums.size()) {
        sum = sum + nums[r];

        if(k <= r-l+1) {
            maxavg = max((sum/k), maxavg);

            sum -= nums[l++];

            // sum = sum - nums[l];
            // l++;
        }


        r++;
    }
    return maxavg;
    }
int main() {
    vector <int> arr = {0};
    
    cout << findMaxAverage(arr,93);
    return 0;
}