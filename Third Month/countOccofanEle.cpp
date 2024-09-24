#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int>& arr, int k) {
    int left = 0;
    int right = arr.size()-1;

    int mid = left + ((right-left)/2);
    int ans = INT16_MAX;
    while(left <= right) {
        if(arr[mid] == k) {
            ans = min(ans,mid);
            right = mid-1;
        }
        else if(arr[mid] > k) {
            right = mid - 1;
        }
        else if(arr[mid] < k) {
            left = mid + 1;
        }
        mid = left + (right-left)/2;
    }
    return (ans == INT16_MAX) ? -1 : ans;
}
int lastOcc(vector<int>& arr, int k) {

    int start = 0;
    int end = arr.size()-1;

    int ans = INT16_MIN;
    int mid = start + ((end-start)/2);

    while(start <= end) {
        if(arr[mid] == k) {
            ans = max(ans,mid);
            start = mid + 1;
        }
        else if(arr[mid] > k) {
            end = mid - 1;
        }
        else if(arr[mid] < k) {
            start = mid + 1;
        }
        mid = start + ((end-start)/2);
    }
    return (ans == INT16_MIN) ? -1 : ans;
}
int searchRange(vector<int>& nums, int target) {
    int x = (firstocc(nums,target));
    int y = (lastOcc(nums,target));

    return y - x + 1;
}
int main() {
    vector<int> arr = {1,1,2,2,2,3,5};
    int ans = searchRange(arr,3);

    
    return 0;
}