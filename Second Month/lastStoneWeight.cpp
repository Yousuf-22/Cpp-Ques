#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> maxx;

    if(stones.size() == 1) {
        return stones[0];
    }
    
    for(int i = 0; i<stones.size(); i++) {
        maxx.push(stones[i]);
    }

    while(!maxx.empty()) {
        if(maxx.size() == 1) {
            return maxx.top();
        } 
        int y = maxx.top();
        maxx.pop();
        int x = maxx.top();
        maxx.pop();
        if(x < y) {
            maxx.push(y-x);
        }
    }
    return 0;
}
int main() {
    vector<int> arr = {2,7,4,1,8,1};
    cout << lastStoneWeight(arr);
    return 0;
}