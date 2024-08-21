#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int> NGE(vector<int>& arr) { 
    stack<int> st;
    vector<int> ans;
    for(int i = arr.size()-1; i>=0; i--) {
        while(!st.empty() and st.top() <= arr[i]) {
            st.pop();
        }   
        if(!st.empty() and st.top() > arr[i]) {
            ans.push_back(st.top());
            st.push(arr[i]);
        }
        else if(st.empty()) {
            ans.push_back(-1);
            st.push(arr[i]);
        }

    }
    reverse(ans.begin(), ans.end());
    for(int i : ans) {
        cout << i <<" ";
    }
}
int main() {
    vector<int> arr = {10,9,4,2,6,8,4,1,9,3};
    NGE(arr);
    return 0;
}