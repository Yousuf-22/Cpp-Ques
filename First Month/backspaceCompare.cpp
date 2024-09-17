#include<iostream>
#include<stack>
using namespace std;
stack <char> intothestack(string x) {
    stack<char> ch;
    for(int i = 0; i<x.size(); i++) {
        if(x[i] != '#') {
            ch.push(x[i]);
        }
        else if(!ch.empty()) {
            ch.pop();
        }
    }
    return ch;
}
bool backspaceCompare(string s, string t) {

    stack<char> st1 = intothestack(s);
    stack<char> st2 = intothestack(t);

    if(st1.size() != st2.size()) {
        return false;
    }

    while(!st1.empty()) {
        if(st1.top() != st2.top()) {
            return false;
        }
        st1.pop();
        st2.pop();
    }
    return true;
}
int main() {
    string s = "a#c";
    string t = "b";
    cout << backspaceCompare(s,t);
    return 0;
}