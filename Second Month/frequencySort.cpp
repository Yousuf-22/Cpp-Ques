#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;
string frequencySort(string s) {
    unordered_map<char,int> mpp;
    priority_queue<pair<int,char>> maxx;

    for(int i = 0; i<s.size(); i++) {
        mpp[s[i]]++;
    }        

    for(auto it : mpp) {
        maxx.push({it.second,it.first});
    }
    string ans = "";
    while(!maxx.empty()) {
        int temp = maxx.top().first;
        while(temp--) {
            ans = ans + maxx.top().second;
        }
        maxx.pop();
    }

    cout << ans;
}
int main() {
    string s = "treefffcccwwetaf";
    frequencySort(s);
    return 0;
}