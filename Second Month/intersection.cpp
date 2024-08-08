#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    unordered_map<int,int> mpp;
    vector<int> ans;
    int i = 0;
    int j = 0;

    while(i != nums1.size() and j != nums2.size()) {
        if(nums1[i] == nums2[j]) {
            mpp[nums1[i]]++;
            i++;
            j++;
        }
        if(nums1[i] > nums2[j]) {
            j++;
        }
        if(nums1[i] < nums2[j]) {
            i++;
        }
    } 
    for(auto it : mpp) {
        ans.push_back(it.first);
    }
}
int main() {
    vector<int> arr = {1,2,2,1};
    vector<int> brr = {2,2};
    intersection(arr,brr);
    return 0;
}