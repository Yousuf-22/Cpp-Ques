#include<iostream>
using namespace std;
long long coloredCells(int n) {
    long sum = 1;
    long temp = 0;
    for(int i = 0; i<n; i++) {
        sum += temp;
        temp += 4;
    }

    return sum;
}
int main() {

    cout << coloredCells(5);
    return 0;
}