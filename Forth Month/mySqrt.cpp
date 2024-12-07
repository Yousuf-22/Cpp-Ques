#include<iostream>
using namespace std;
int mySqrt1(int x) {

    int ans = 0;

    for(int i = 1; i<=x/2; i++) {
        if(i * i <= x) {
            ans = i;
        }
        else {
            break;
        }
    }        
    return ans;
}

int mySqrt(int x) {
    int left = 1;
    int right = x;
    int mid = left + (right-left)/2;

    int ans = 0;
    while(left <= right) {
        if((mid*mid) <= x) {
            ans = mid;
            left = mid+1;
        }
        else if((mid*mid) > x) {
            right = mid-1;
        }
        mid = (right+left)/2;
    }        
    return ans;
}
int main() {
    cout << mySqrt(10);
    return 0;
}