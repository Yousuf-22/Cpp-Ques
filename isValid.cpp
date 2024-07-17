#include<iostream>
#include<stack>
using namespace std;
bool isValid(string str) {
    stack <int> s;
    for(int i = 0; i<str.size(); i++) {
        if(str[i] == '(' or str[i] == '[' or str[i] == '{') {
            s.push(str[i]);
        }
        else{
            if(s.empty()) {
            return false;
            }
            char ch = s.top(); 
            s.pop();
            if(str[i] == ')' and ch == '(' or 
            str[i] == ']' and ch == '[' or 
            str[i] == '}' and ch == '{') {

            }
            else {
                return false;
            }
        }
        
    }
    if(s.empty()) {
        return true;
    }
    }
int main() {
    string str = {"(]"};
    cout << isValid(str);
    return 0;
}