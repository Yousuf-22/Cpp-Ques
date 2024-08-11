#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int firstUniqChar(string s) {
    unordered_map<char,int> mpp;
    int maxx = 0;
    for(int i = 0; i<s.size(); i++) {
        mpp[s[i]]++;
    }      

    for(auto it : mpp) {
        maxx = max(maxx,it.second);
    }  

    char ch;
    for(auto it : mpp) {
        if(it.second == maxx) {
            ch = it.first;
        }
        if(it.second == 1) {
            return it.first;
        }
    }
}
int main() {
    string s = "loveleetcode";
    firstUniqChar(s);
    return 0;
}