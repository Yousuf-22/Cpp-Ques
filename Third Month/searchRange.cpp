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
vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.size() == 0) {
        return {-1,-1};
    }
    if(nums.size() == 1) {
        if(nums[0] == target) {
            return {0,0};
        }  
        else return {-1,-1};
    }
    if(nums.size() == 2) {
        if(nums[0] == target and nums[1] == target) {
            return {0,1};
        }
        else return {-1,-1};
    }
    vector<int> ans;

    int x = (firstocc(nums,target));
    int y = (lastOcc(nums,target));

    ans.push_back(x);
    ans.push_back(y);
    return ans;
}
int main() {
    vector<int> arr = {1};
    vector<int> ans = searchRange(arr,3);

    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
}