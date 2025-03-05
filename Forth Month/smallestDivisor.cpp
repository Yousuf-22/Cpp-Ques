#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int Divisor(vector<int>& arr, int mid) {
    int res = 0;

    for(int i = 0; i<arr.size(); i++) {
        res +=  ceil(double(arr[i])/double(mid));
    }
    return res;
}
int maxele(vector<int>& nums) {
    int res = __INT_MAX__;

    for(int i : nums) {
        if(res < i) res = i;
    }

    return res;
}
int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = maxele(nums);
    int ans = 0;
    
    while(low <= high) {
        int mid = (high+low)/2;
        int temp = Divisor(nums,mid);

        if(temp <= threshold) {
            ans = temp;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}
int main() {
    vector<int> arr = {44,22,33,11,1};
    cout << smallestDivisor(arr,5);
    return 0;
}