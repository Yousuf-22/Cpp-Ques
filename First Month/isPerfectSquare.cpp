#include<iostream>
using namespace std;
bool isPerfectSquare(int num) {
    double mid = (num) / 2;

    while(num) {
        if((mid * mid) == num) {
            return true;
        }
        if((mid * mid) > num) {
            mid = mid - 1;
        }
        else{
            mid = mid + 1;
        }
        mid = mid / 2;
    }
    return false;
}
int main() {
    int n = 16;
    int ans = isPerfectSquare(n);
    cout << ans;
    // if(isPerfectSquare) {
    //     cout << " BKL ";
    // }
    // else{
    //     cout << " : ) ";
    // }
    return 0;
}