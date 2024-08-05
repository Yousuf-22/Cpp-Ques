#include<iostream>
using namespace std;

void RotatebyOne(int arr[], int n) {
    int one = arr[0];
    for(int i = 1; i<n; i++) {
        arr[i-1] = arr[i];
        if(arr[i] == n) {
            arr[i] = one;
        } 
    }
}

void Print(int arr[], int n){
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void RotatebyK(int arr[], int n, int k){

    if(k <= n) return;

    int brr[k];

    for(int i=0; i<=k; i++) {
        brr[i] = arr[i];
    }
    for(int i=0; i<n; i++) {
        arr[i] = arr[k];
        k++;
    }
    for(int i=0; i)
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    
    RotatebyOne(arr,n);
    Print(arr,n);

    
    return 0;
}