#include<iostream>
using namespace std;
bool reverse(int x) {

    int y = x;
    long rev = 0;

    if(x < 0) return false;
    while(x != 0) {
        long long ld = x%10;
        rev = rev*10;
        rev = ld+rev;
        x = x/10;
        if(rev == y) return true;
    }
    return false;
    }
int main() {
    int x = -121;
    cout << reverse(x);
    return 0;
}