#include<iostream>
using namespace std;
bool threeConsecutiveOdds(int arr[], int n) {
    for(int i=0; i<n - 2; i++) {
        if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0){
            return true;
        }
    }
    return false;
    }int main() {
    int arr[] = {1,2,34,3,4,5,7,23,12};
    int n = sizeof(arr) / 4;
    cout << threeConsecutiveOdds(arr,n);
    return 0;
}