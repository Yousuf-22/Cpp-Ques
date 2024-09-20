#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int maxProduct(vector<int>& nums) {
    priority_queue<int> maxx;

    for(int i = 0; i<nums.size(); i++) {
        maxx.push(nums[i]);
    }
    int x = maxx.top() - 1;
    maxx.pop();
    int y = maxx.top() - 1;

    return x*y;
}
int main() {
    vector<int> arr = {1,5,4,5};
    cout << maxProduct(arr);
    return 0;
}