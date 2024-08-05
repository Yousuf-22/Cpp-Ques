#include<iostream>
#include<stack>
using namespace std;
bool backspaceCompare(string s, string t) {
    stack <char> st1;
    stack <char> st2;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] != '#') {
            st1.push(s[i]);
        }
        if(t[i] != '#') {
            st2.push(t[i]);
        }
        if(s[i] == '#' && st1.empty() != 1) {
            st1.pop();
        }
        if(t[i] == '#' && st2.empty() != 1) {
            st2.pop();
        }
    }
    while(!st1.empty()) {
        if(st1.size() != st2.size()) {
            return false;
        }
        else if(st1.top() != st2.top()) {
            return false;
        }
        st1.pop();
        st2.pop();
    }
    return true;
}
int main() {
    string s = "xywrrmp";
    string t = "xywrrmu#p";
    bool ans = backspaceCompare(s,t);
    cout << ans;
    return 0;
}