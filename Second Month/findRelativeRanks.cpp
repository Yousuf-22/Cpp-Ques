#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<string> findRelativeRanks(vector<int>& score) {
    priority_queue<pair<int,int>> maxx;
    
    vector<string> ans(score.size());
    
    if(score.size() == 1) {
        ans[0] = "Gold Medal";
        return ans;
    }

    for(int i = 0; i<score.size(); i++) {
        maxx.push({score[i],i});
    }
    int cnt = 1;
    while(!maxx.empty()) {
       if(cnt == 1) {
        ans[maxx.top().second] = "Gold Medal";
       }
       else if(cnt == 2) {
        ans[maxx.top().second] = "Silver Medal";
       }
       else if(cnt == 3) {
        ans[maxx.top().second] = "Bronze Medal";
       }
       else {
        ans[maxx.top().second] = to_string(cnt);
       }
        maxx.pop();
        cnt++;
    }
    return ans;
}
int main() {
    vector<int> arr = {1};
    vector<string> ans = findRelativeRanks(arr);

    for(string x : ans) {
        cout << x <<" ";
    }
    return 0;
}