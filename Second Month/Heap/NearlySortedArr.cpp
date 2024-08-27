#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> ksortedarr(vector<int>& arr, int k) {
    priority_queue<int,vector<int>, greater<int>> minn;
    vector<int> ans;
    for(int i = 0; i<arr.size(); i++) {
        if(minn.size() > k) {
            int temp = minn.top();
            minn.pop();
            ans.push_back(temp);
        }
        else {
            minn.push(arr[i]);
        }
    }
    while(!minn.empty()) {
        ans.push_back(minn.top());
        minn.pop();
    }

    for(int x : ans) {
        cout << x << " ";
    }
}
int main() {
    vector<int> arr = {6,5,3,2,8,10,9};
    ksortedarr(arr,3);
    return 0;
}