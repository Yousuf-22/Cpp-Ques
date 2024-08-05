#include<iostream>
#include<algorithm>
using namespace std;
string addBinary(string a, string b) {

    if(a == "0" and b == "0") return 0;
    int p = 1;
    int integera = 0;
    int integerb = 0;
    
    for(int i = a.size()-1; i>=0; i--) {
        if(a[i] == '1') {
            integera += p;
        }
        if(a.size() < INT16_MAX and b.size() < INT16_MAX) p *= 2;
    }
    p = 1;
    for(int i = b.size()-1; i>=0; i--) {
        if(b[i] == '1') {
            integerb += p;
        }
        if(a.size() < INT16_MAX and b.size() < INT16_MAX) p *= 2;
    }
    int sum = integera + integerb;

    string ans = "";

    while(sum > 0) {
        if(sum%2 == 0) ans = ans + '0';
        else ans = ans + '1';
        sum = sum/2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    string a = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    string b = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    cout << addBinary(a,b);
    return 0;
}