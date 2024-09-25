#include<iostream>
#include<algorithm>
using namespace std;
int deci(string a) {
    int p = 1;
    int ans = 0;
    for(int i = a.size()-1; i>=0; i--) {
        if(a[i] == '1') {
            ans = ans + p;
        }
        p *= 2;
    }
    return ans;
}
string addBinary(string a, string b) {
    int x = deci(a);
    int y = deci(b);
    int z = x + y;

    string str = "";
    while(z > 0) {
        if(z % 2 == 0) {
            str += '0';
        } 
        else str += '1';

        z = z/2;
    }
    reverse(str.begin(), str.end());

    return str;
}
int main() {
    cout << addBinary("1010","1011");
    return 0;
}