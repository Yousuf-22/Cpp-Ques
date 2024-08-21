#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> NSR(vector<int>& arr) {
    stack<int> st;
    vector<int> ans;
    for(int i = arr.size()-1; i>=0; i--) {
        while(!st.empty() and st.top() > arr[i]) {
            st.pop();
        }
        if(st.empty()) {
            ans.push_back(-1);
            st.push(arr[i]);
        }
        else if(!st.empty() and st.top() < arr[i]) {
            ans.push_back(st.top());
            st.push(arr[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    for(int x : ans) {
        cout << x << " ";
    }
}
int main() {
    vector<int> arr = {10,9,4,2,6,8,4,1,9,3};
    NSR(arr);
    return 0;
}