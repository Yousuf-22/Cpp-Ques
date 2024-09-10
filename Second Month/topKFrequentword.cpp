#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<string> topKFrequent(vector<string>& words, int k) {

    priority_queue<pair<int,string>> maxx;
    
    unordered_map<string,int> mpp;

    vector<string> ans;
    for(int i = 0; i<words.size(); i++) {
        mpp[words[i]]++;
    }

    for(auto it : mpp) {
        maxx.push({it.second,it.first});
    }

    while(k--) {
        ans.push_back(maxx.top().second);
        maxx.pop();
    }
    return ans;
}
int main() {

    vector<string> s = {"i","love","leetcode","i","love","coding"};
    vector<string> ans = topKFrequent(s,2);

    for(string x : ans) {
        cout << x << " ";
    }
    return 0;
}