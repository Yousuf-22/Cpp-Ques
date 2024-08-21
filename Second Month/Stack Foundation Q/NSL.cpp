#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> NSL(vector<int>& arr) { 
    stack<int> st;
    vector<int> ans;
    for(int i = 0; i<arr.size(); i++) {
        while(!st.empty() and st.top() >= arr[i]) {
            st.pop();
        }   

        if(st.empty()) {
            ans.push_back(-1);
            st.push(arr[i]);
        }
        else if(!st.empty() and st.top() <arr[i]) {
            ans.push_back(st.top());
            st.push(arr[i]);
        }

    }
    for(int i : ans) {
        cout << i <<" ";
    }
}
int main() {
    vector<int> arr = {10,9,4,2,6,8,4,1,9,3};
    NSL(arr);
    return 0;
}