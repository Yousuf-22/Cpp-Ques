#include<iostream>
#include<vector>
#include<cmath>
#include<queue>
using namespace std;
long long maxKelements(vector<int>& nums, int k) {
    int n = k;
    priority_queue<long long> maxx;
    long long score = 0;
    for(int i = 0; i<nums.size(); i++) {
        maxx.push(nums[i]);
    }

    while(k--) {
        long long temp = maxx.top();
        maxx.pop();
        score += temp;
        maxx.push(ceil((temp + 2)/3));
    }   
    return score;
}
int main() {
    vector<int> arr = {756902131,995414896,95906472,149914376,387433380,848985151};
    cout << maxKelements(arr,6);
    return 0;
}