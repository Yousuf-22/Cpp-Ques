#include<iostream>
#include<queue>
using namespace std;
vector<int> sortArray(vector<int>& nums) {
    priority_queue<int,vector<int>, greater<int>> minn;
    vector<int> ans;

    for(int i = 0; i<nums.size(); i++) {
        minn.push(nums[i]);
    }

    while(!minn.empty()) {
        ans.push_back(minn.top());
        minn.pop();
    }
    return ans;
}
int main() {
    vector<int> arr = {5,3,2,1};
    vector<int> ans = sortArray(arr);

    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
}