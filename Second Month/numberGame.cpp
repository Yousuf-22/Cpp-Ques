#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int> numberGame(vector<int>& nums) {
    priority_queue <int, vector<int>, greater<int> > minn; 
    vector<int> ans;

    for(int i = 0; i<nums.size(); i++) {
        minn.push(nums[i]);
    }

    while(!minn.empty()) {
        int first = minn.top();
        minn.pop();
        int second = minn.top();
        ans.push_back(second);
        ans.push_back(first);
        minn.pop();
    }
    
    return ans;
}
int main() {
    vector<int> arr = {2,5};
    numberGame(arr);
    return 0;
}