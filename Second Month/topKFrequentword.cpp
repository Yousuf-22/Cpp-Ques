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

        if(maxx.size() > k) {
            maxx.pop();
        }
    }

    while(!maxx.empty()) {
        ans.push_back(maxx.top().second);
        maxx.pop();
    }
    return ans;
}
int main() {

    vector<string> s = {"the","day","is","sunny","the","the","the","sunny","is","is"};
    vector<string> ans = topKFrequent(s,4);

    for(string x : ans) {
        cout << x << " ";
    }
    return 0;
}