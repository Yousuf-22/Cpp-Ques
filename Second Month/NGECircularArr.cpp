#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;
    
    for(int i = 2*n-1; i>=0; i--) {
       while(!st.empty() and st.top() <= nums[i%n]) {
                st.pop();
        }
        if((!st.empty()) and (i<n)) {
            ans[i] = st.top();
        }
        st.push(nums[i%n]);
    }
    for(int x : ans) {
        cout << x << " ";
    }
}
int main() {
    vector<int> arr = {2,10,12,1,11};
    nextGreaterElements(arr);
    return 0;
}