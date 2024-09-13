#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int countConsistentStrings(string allowed, vector<string>& words) {
    unordered_map<char,int> mpp;
    for(char ch : allowed) {
        mpp[ch]++;
    }
    int cnt = 0;
    for(int i = 0; i<words.size(); i++) {
       string temp = words[i];

        bool flag = true;
        for(int j = 0; j<temp.size(); j++) {
            if(mpp.find(temp[j]) != mpp.end()) {
                // Element found;
                continue;
            }
            else{
                // Different Element Found;
               flag = false;
               break;
            }
       }
        if(flag == 1) cnt++;
    }
    return cnt;
}
int main() {
    vector<string> w = {"cc","acd","b","ba","bac","bad","ac","d"};
    cout << countConsistentStrings("cad",w);
    return 0;
}