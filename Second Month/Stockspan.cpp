#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stockspan(vector<int>& arr) {
    stack<pair <int,int>> st;
    vector<int> ans;
    for(int i = 0; i<arr.size(); i++) {
        while(!st.empty() and st.top().first < arr[i]){

        }
        if(st.empty()) {
            ans.push_back(-1);
        }
        if()
    }
}
int main() {
    vector<int> arr = {100,80,60,70,60,75,85};
    return 0;
}