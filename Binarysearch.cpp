#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int n = nums.size() - 1;
    int left = 0;
    int right = n;
    int mid = (left + right) /2;

    while(left <= right) {
        if(nums[mid] == target) {
            return mid;
        }
        if(nums[mid] > target) {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
        mid = (left + right) / 2;
    }
    return -1;
}
int main() {
    vector <int> arr = {-1,0,3,5,9,12};
    cout << search(arr,5);
    return 0;
}