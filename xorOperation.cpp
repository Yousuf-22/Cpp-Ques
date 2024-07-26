#include<iostream>
#include<vector>
using namespace std;
int xorOperation(int n, int start) {
    vector<int> arr(n,0);
    int xorr = 0;
        for(int i = 0; i<n; i++) {
            arr[i] = start + 2 * i;
            xorr = arr[i] ^ xorr;
        }
        return xorr;
    }
int main() {
    int n = 4;
    cout << xorOperation(n,3);
    return 0;
}