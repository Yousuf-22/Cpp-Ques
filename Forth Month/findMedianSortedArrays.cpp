#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> arr, vector<int> brr) {
    vector<int> ans;
    int i = 0;
    int j = 0;

    while(i < arr.size() and j < brr.size()) {
        if(arr[i] < brr[j]) {
            ans.push_back(arr[i++]);
        }
        else {
            ans.push_back(brr[j++]);
        }
    }

    while(i < arr.size()) ans.push_back(arr[i++]);
    while(j < brr.size()) ans.push_back(brr[j++]);

    return ans;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans = merge(nums1,nums2);

    if(ans.size() & 1) {
        int temp = ans.size()/2;
        return double(ans[temp]);
    }
    else {
        int temp1 = ans.size()/2;
        int temp2 = temp1 - 1;
        return double(ans[temp1]+ans[temp2])/2;
    }
}

int main() {
    vector<int> arr = {1,2,3};
    vector<int> brr = {5,7,9,11};
    cout << findMedianSortedArrays(arr,brr);
    return 0;
}