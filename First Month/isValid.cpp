#include<iostream>
#include<stack>
using namespace std;
bool isValid(string str) {
    stack <int> st;
    for(int i = 0; i<str.size(); i++) {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            st.push(str[i]);
        }
        else{
            char ch = st.top();
            st.pop();
            if(str[i] == ')' and ch == '(' || str[i] == ']' and ch == '[' || str[i] == '}' and ch == '{') {
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()) {
        return true;
    }
    return false;
} 
int main() {
    string str = {"(}"};
    cout << isValid(str);
    return 0;
}