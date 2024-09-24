#include<iostream>
#include<vector>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {

    int i = 0;
    int j = 0;

    int sum = 0;
    int cnt = 0;

    while(j < arr.size()) {
        sum += arr[j];

        if((j-i+1) > k) {
            sum -= arr[i++];
        }
        if((j-i+1) == k) {
            int temp = 0;
            temp = sum / k;
            if(temp >= threshold) {
                cnt++;
            }
        }
        j++;
    }
    return cnt;    
}
int main() {
vector<int> arr = {11,13,17,23,29,31,7,5,2,3};
numOfSubarrays(arr,3,5);
return 0;
}