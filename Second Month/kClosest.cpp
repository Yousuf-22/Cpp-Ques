#include<iostream>
#include<vector>
#include<queue>
#include <cstdlib>
using namespace std;
vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
    priority_queue<pair<int,pair<int,int>>> maxx;
    vector<vector<int>> ans;
    for(int i = 0; i<arr.size(); i++) {
        int x = arr[i][0] , y = arr[i][1];
        int distance = (x * x) + (y * y);
        maxx.push({distance,{x,y}});

        if(maxx.size() > k) {
            maxx.pop();
        }
    }
    
    while(!maxx.empty()) {
        int x = maxx.top().second.first;
        int y = maxx.top().second.second;

        ans.push_back({x,y});
        maxx.pop();
    }
    return ans;
}
int main() {
    vector<vector<int>> arr = {{3,3},{5,-1},{-2,4}};
    vector<vector<int>> ans = kClosest(arr,2);

    return 0;
}