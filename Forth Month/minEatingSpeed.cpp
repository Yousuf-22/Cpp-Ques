#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int k(vector<int>& arr ,int mid) {

    long long res = 0;

    for(int i = 0; i<arr.size(); i++) {
        res += ceil((double)(arr[i]) / (double)(mid));
    }
    
    return res;
}   
int maxele(vector<int>& arr) {
    int ans = INT16_MIN;

    for(int i = 0; i<arr.size(); i++) {
        if(ans < arr[i]) ans = arr[i];
    } 

    return ans;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = maxele(piles);
    
    while(low <= high) {

        int mid = (high+low)/2;
        int ans = k(piles,mid);
        
        if(ans <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}
int main() {
    vector<int> arr = {805306368,805306368,805306368};
    cout << minEatingSpeed(arr,1000000000); 

    return 0;
}