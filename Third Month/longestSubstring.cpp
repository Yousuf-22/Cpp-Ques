#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int longestSubstring(string s, int k) {
    unordered_map<char,int> mpp;
    int i = 0;
    int j = 0;
    int cnt = 0;

    while(j < s.size()) {
        mpp[s[j]]++;

        if((j-i+1) >= mpp.size()*k) {
            cnt = j-i+1;
        }
        j++;
    } 
    cout << cnt;
}
int main() {
    string s = "ababbc";
    longestSubstring(s,2);
    return 0;
}