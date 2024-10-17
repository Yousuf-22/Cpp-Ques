#include<iostream>
#include<vector>
using namespace std;
long long minimumSteps(string s) {
    int i = 0;
    int j = 1;
    int cnt = 0;

    if(s.size() == 1) return 0;

    while(j < s.size()) {
        if(s[i] == '0' and s[j] == '1' ||
        s[i] == '0' and s[j] == '0') {
            i++;
            j++;
        }
        if(s[i] == '1' and s[j] == '0') {
            swap(s[i],s[j]);
            cnt++;
            i++;
            j++;
        }
        if(s[i] == '1' and s[j] == '1') {
            j++;
        }
    }
    return cnt;
}
int main() {
    string s = "11000111";
    cout << minimumSteps(s);
    return 0;
}