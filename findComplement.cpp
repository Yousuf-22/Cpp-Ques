#include<iostream>
#include<algorithm>
using namespace std;
int findComplement(int num) {
    string s = "";
    while(num != 0) {
        if(num % 2 == 0) s += '1';
        else s+= '0';
        num = num >> 1;
    }
    reverse(s.begin(),s.end());
    cout << s  << endl;

    int p1 = 1;
    int ans = 0;
    for(int i = s.length()-1; i>=0; i--) {
        if(s[i] == '1') {
            ans += p1;
        }
        p1 *= 2;
    }
    cout << "Complement : " << ans;
}
int main() {
    int n;
    cin >> n;
    findComplement(n);
    return 0;
}