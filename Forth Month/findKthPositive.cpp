#include<iostream>
#include<vector>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
    vector<int> missingele;

    int i = 1;
    int j = 0;
    int cnt = 0;
    int ans = 0;
    while(cnt < k) {
        if(j < arr.size()) {
            if(i == k) {
                return ans;
            } 
            if(i != arr[j]) {
                cnt++;
                i++;
            }
            else {
                j++;
                i++;
            }
        }
        else {
            cnt++;
        }
    }
    return i;
}
int main() {
    vector<int> arr = {2,3,5,7,11};

    cout << findKthPositive(arr,6);
    return 0;
}