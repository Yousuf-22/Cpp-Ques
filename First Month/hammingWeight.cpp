#include<iostream>
using namespace std;
int hammingWeight(int n) {
    int cnt = 0;

    while(n != 0) {
        if(n % 2 == 1) cnt++; 
        n = n/2;
    }
    return cnt;
    }
int main() {
    int n;
    cin >> n;
    cout << hammingWeight(n);
    return 0;
}