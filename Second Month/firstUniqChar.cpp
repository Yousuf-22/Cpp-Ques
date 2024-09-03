#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int firstUniqChar(string s) {
        unordered_map<char, int> mpp;
        if(s.size() == 1) {
            return s[0];
        }
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            for (auto it : mpp) {
                if (s[i] == it.first and it.second == 1) {
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
int main() {
    string s = "loveleetcode";
    cout << firstUniqChar(s);
    return 0;
}