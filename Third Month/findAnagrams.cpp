#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> findAnagrams(string s, string m) {
    unordered_map<char,int> mpp;

    for(char ch : s) {
        mpp[ch]++;
    }
    int i = 0;
    int j = 0;

    int cnt = mpp.size();
    vector<int> ans;

    while(j < s.size()) {
        
        if((j-i+1) > mpp.size()) {
            if(mpp.find(s[i]) != mpp.end()){
                mpp[s[i]]++;
                cnt++;
                i++;
            }
            else i++;
        }

        if(mpp.find(s[j]) != mpp.end()){
            mpp[s[j]]--;
        }

        if(mpp[s[j]] == 0) {
            cnt--;
            if(cnt == 0) {
                ans.push_back(i);
            }
        }

        j++;
    }
    for(int x : ans) {
        cout << x;
    }
}
int main() {
    findAnagrams("cbaebabacd","abc");
    return 0;
}