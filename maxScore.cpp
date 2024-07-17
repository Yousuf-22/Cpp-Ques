#include<iostream>
#include<vector>
using namespace std;
int maxScore(vector<int>& arr, int k) {
    int n = sizeof(arr);
    int l = 0;
    int r = k-1;

    int sum = 0;
    int maxscoree = 0;
    // for(int i = l; i<=r; i++) {
    //     sum = sum + arr[i];
    //     maxscoree = max(sum, maxscoree);
    // }
    while(r < n-1) {
        sum = sum + arr[i];
        maxscoree = max(sum, maxscoree);
    }
    r++;
    sum = sum - arr[l];
    l++;
    return maxscoree;
    }
int main() {
    vector <int> arr = {1,2,3,4,5,6,1};
    cout << maxScore(arr,3);
    return 0;
}