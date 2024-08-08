#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;

    for(int i = nums1.size()-1; i>=0; i--) {
        st.push(nums1[i]);
    }
    vector<int> ans;
    int i = 0;
    while(!st.empty()) {
        if(st.top() == nums2[i] and nums2[i] != nums2.size()-1) {
            if(nums2[i] < nums2[i+1]) {
                ans.push_back(nums2[i+1]);
                st.pop();
                i++;
            }
            else{
                ans.push_back(-1);
            }
        }
        i++;
    }
    cout << st.top();
}
int main() {
    vector<int> v1 = {4,1,2};
    vector<int> v2 = {1,3,4,2};
    nextGreaterElement(v1,v2);
    return 0;
}