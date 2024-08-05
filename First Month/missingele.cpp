#include <bits/stdc++.h> 
using namespace std;
int missingNumber(vector<int>& arr) {
    int sum = 0;
    int n = arr.size();
    n = n * (n+1) / 2;
    sort(arr.begin(), arr.end());
    for(int i = 0; i<arr.size(); i++) {
        sum += arr[i];
    }
    return n - sum;
}

int main() {
    vector <int> arr = {9,6,4,2,3,5,7,0,1};
    cout << missingNumber(arr);
    return 0;
}