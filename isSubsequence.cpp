#include<iostream>
using namespace std;
bool isSubsequence(string s, string t) {
    int i = 0;
    int j = 0;

    int cnt = 0;

    if(s.empty() and t.empty()) {
        return true;
    }

    while(j < max(s.size(), t.size())) {
        if(s[i] == t[j]) {
            i++;
            j++;
            cnt++;
        }
        else{
            j++;
        } 
     // cout << cnt << endl;
    }
    if(cnt == s.size()) {
        return true;
    }

    return false;
}
int main() {
    string s = {"aaaaaa"};
    string t = {"bbaaaa"};

    cout << isSubsequence(s,t);

    return 0;
}