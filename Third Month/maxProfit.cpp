#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector<int>& arr) {
    int ans = 0;

    // for(int i = 0; i<arr.size()-1; i++) {
    //     int maxx = INT16_MIN;
    //     for(int j = i+1; j<arr.size(); j++) {
    //         if(maxx < arr[j]) {
    //             maxx = arr[j];
    //         }
    //     }
    //     int temp = 0;
    //     temp = maxx - arr[i];
    //     ans = max(ans,temp);
    // }
    // cout << ans ;

    int buy = arr[0];
    int maxx = 0;
    for(int i = 0; i<arr.size(); i++) {
        if(buy > arr[i]) {
            buy = arr[i];
        }
        else {
            int temp = 0;
            temp = arr[i] - buy;
            maxx = max(maxx,temp);
            temp = 0;
        }
    }
    return maxx;
}
int main() {
    vector<int> arr = {7,1,5,3,6,4};
    maxprofit(arr);
    return 0;
}