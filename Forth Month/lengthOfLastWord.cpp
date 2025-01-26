#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) {
    int cnt = 0;

    for(int i = (s.length() - 1); i >= 0; i--) {
        if(cnt > 0 && s[i] == ' ') return cnt;
        else if(s[i] != ' ') {
            cnt ++;
            if(i == 0) return cnt;
        }
        else continue;
    }
    return 0;
}
int main() {
    string s = "word    at   ";
    cout << lengthOfLastWord(s);
    return 0;
}