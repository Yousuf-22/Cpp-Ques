#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<string> findRelativeRanks(vector<int>& score) {
    priority_queue<pair<int,int>> maxx;
    
    vector<string> ans(score.size());

    for(int i = 0; i<score.size(); i++) {
        maxx.push({score[i],i});
    }
    int cnt = 1;
    while(!maxx.empty()) {
       if(cnt == 1) {
        // cout << maxx.top().second;
        ans[maxx.top().second] = "Gold Medal";
        maxx.pop();
        cnt++;
       }
       if(cnt == 2) {
        // cout << maxx.top().second;
        ans[maxx.top().second] = "Silver Medal";
        maxx.pop();
        cnt++;
       }
       if(cnt == 3) {
        // cout << maxx.top().second;
        ans[maxx.top().second] = "Bronze Medal";
        maxx.pop();
        cnt++;
       }
       else {
        // cout << maxx.top().second;
        ans[maxx.top().second] = to_string(cnt);
        maxx.pop();
        cnt++;
       }
    }
    cout << endl;
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
int main() {
    vector<int> arr = {5,4,3,2,1};
    findRelativeRanks(arr);
    return 0;
}