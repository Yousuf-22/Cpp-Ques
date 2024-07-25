#include<iostream>
using namespace std;
int countGoodSubstrings(string s) {
    int l = 0;
    int r = 0;

    string sum;
    int ans = 0;

    if(s.size() < 3) {
        return 0;
    }

    sum = sum + s[r];
    while(r < s.size()) {

        if(3 < r-l+1) {
            l++;
        }

        if(3 == r-l+1){
            if(s[l] != s[l+1] && s[l+1] != s[r] && s[l] != s[r]) {
                ans = ans + 1;
            }
        }
        r++;
    }    

    return ans;
    }
int main() {
    string s = "xyxxyz";
    cout << countGoodSubstrings(s);
    return 0;
}