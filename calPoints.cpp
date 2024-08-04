#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int calPoints(vector<string>& operations) {
    stack<int> st;
    for(int i = 0; i<operations.size(); i++) {
        if(operations[i] == "+" and st.size() >= 2) {
            int temp = 0;
            int stemp = 0;
            temp = st.top();
            st.pop();
            stemp = st.top();
            st.push(temp);
            st.push(temp+stemp);
        } 
        else if(operations[i] == "D" and !st.empty()) {
            st.push(st.top()*2);
        }
        else if(operations[i] == "C") {
            st.pop();
        }
        else{
            int temp = stoi(operations[i]);
            st.push(temp);
        }
    }
    int ans = 0;
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main() {
    vector<string> arr = {"5","2","C","D","+"};
    cout << calPoints(arr);
return 0;
}