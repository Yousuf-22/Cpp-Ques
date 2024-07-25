#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int hammingDistance(int x, int y) {
    string x1 = "";
    string y1 = "";

    while(max(x,y) != 0) {
        if(x % 2 == 1) x1 += '1';
        if(y % 2 == 1) y1 += '1';
        if(x % 2 != 1) x1 += '0';
        if(y % 2 != 1) y1 += '0';

        x = x/2;
        y = y/2;
    }
    // reverse(x1.begin(), x1.end());
    // reverse(y1.begin(), y1.end());
    cout << x1 << endl << y1 <<endl;

    int ans = 0;

    for(int i = 0; i<x1.size(); i++) {
        if(x1[i] != y1[i]) ans++;
    }
    return ans;
    }
int main() {
    int x, y;
    cin >> x >> y;
    cout << hammingDistance(x,y);
    return 0;
}