#include<iostream>
#include<algorithm>
using namespace std;
int deci(string a) {
    long long p = 1;
    long long ans = 0;
    for(int i = a.size()-1; i>=0; i--) {
        if(a[i] == '1') {
            ans = ans + p;
        }
        if(p < INT16_MAX)
        p *= 2;
    }
    return ans;
}
string addBinary(string a, string b) {
    if(a[0] == '0' and b[0] == '0') return "0";
    long long x = deci(a);
    long long y = deci(b);
    long long z = x + y;

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
    cout << addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101","110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011");
    return 0;
}