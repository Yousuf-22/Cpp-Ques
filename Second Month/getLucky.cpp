#include<iostream>
#include<string>
#include<vector>
using namespace std;
int getLucky(string s, int k) {
    string ans = "";

    int x = 0;
    for(int i = 0; i<s.size(); i++) {
        ans += to_string(int(s[i]) - 'a' + 1);

    }
    
    while(k > 0) {
        int temp = 0;
        for(char ch : ans) {
            temp += ch  - '0';
        }
        ans = to_string(temp);
        k--;
    }
    return stoi(ans);
}
int main() {
    string s = "zbax";
    cout << getLucky(s,2);
    return 0;
}