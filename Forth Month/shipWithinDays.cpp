#include<iostream>
#include<vector>
using namespace std;
int loww(vector<int>& arr) {
    int res = 0;
    for(int i : arr) res = max(res,i);
    return res;
}

int highh(vector<int>& arr) {
    int res = 0;
    for(int i : arr) res += i;
    return res;
}

int loadd(vector<int>& arr, int mid) {
    int day = 1;
    int sum = 0;
    for(int i = 0; i<arr.size(); i++) {
        if(sum + arr[i] > mid) {
            day++;
            sum = 0;
        }
        sum += arr[i];
    }
    return day;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = loww(weights);
    int high = highh(weights);

    int res = 0;

    while(low <= high) {
        int mid = (low+high)/2;
        int ans = loadd(weights,mid);
        if(ans <= days) {
            high = mid-1;
            res = mid;
        }
        else {
            low = mid+1;
        }
    }
    return low;
}
int main() {
    vector<int> arr = {3,2,2,4,1,4};
    cout << shipWithinDays(arr,3);
    return 0;
}