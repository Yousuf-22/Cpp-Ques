#include<iostream>
#include<stack>
using namespace std;
stack <char> intothestack(string x) {
    stack<char> ch;
    for(int i = 0; i<x.size(); i++) {
        if(x[i] != '#') {
            ch.push(x[i]);
        }
        if(!ch.empty()) {
            ch.pop();
        }
    }
    return ch;
}
bool backspaceCompare(string s, string t) {

    stack<char> a = intothestack(s);
    stack<char> b = intothestack(t);

    if(a.size() != b.size()) {
        return false;
    }

    while(!a.empty()) {
        cout << a.top();
        cout << b.top();
        if(a.top() != b.top()) {
            return false;
        }
        a.pop();
        b.pop();
    }
    return true;
}
int main() {
    string s = "a#c";
    string t = "b";
    cout << backspaceCompare(s,t);
    return 0;
}