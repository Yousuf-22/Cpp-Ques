#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
vector<int> nextGreaterElements(vector<int>& arr) {
    vector<int> ans;
    stack<int> st;
    for(int i = arr.size()-1; i>=0; i--) {
        if(!st.empty() and st.top() <= arr[i]) {
            while(!st.empty() and st.top() <= arr[i]) {
                st.pop();
            }
        }
        if(st.empty()) {
            ans.push_back(-1);
            st.push(arr[i]);
        }
        else if(st.top() > arr[i]) {
            ans.push_back(st.top());
            st.push(arr[i]);
        }
            
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    vector<int> nums = {4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int> ans = nextGreaterElements(nums);
    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}