#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    int left = 1;
    int right = arr.size()-2;

    int mid = left + ((right-left)/2);

    int ans = INT16_MIN;

    while(left <= right) {
        if(arr[mid] > arr[mid-1] and 
        arr[mid] > arr[mid+1]) {
            return mid;
        }
        else if(arr[mid] > arr[mid+1]) {
            right = mid-1;
        }
        else if(arr[mid] < arr[mid+1]) {
            left = mid+1;
        } 
        mid = left + ((right-left)/2);
    }
    return 0;
}
int main() {
    vector<int> arr = {2,3,6,7,9,10,1};
    cout << peakIndexInMountainArray(arr);
    return 0;
}