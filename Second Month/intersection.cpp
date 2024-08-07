#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> mpp1;
    map<int,int> mpp2;

    for(int i: nums1) {
        mpp1[i]++;
    }

    vector<int> ans;
    set<int> uniqueset;
    for(int i : nums2) {
        if(i == mpp1[i]) {
            
            ans.push_back(i);
        }
    }
    for(int x : ans) {
        cout << x << " ";
    }
}
int main() {
    vector<int> v1 = {1,2,2,1};
    vector<int> v2 = {2,2};
    intersection(v1,v2);
    return 0;
}