#include<iostream>
#include<vector>
#include<map>
using namespace std;
// brute force
int majorityElement(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cnt = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    cnt++;
                }
                if (cnt > n / 2) {
                    ans = arr[i];
                }
            }
        }
        return ans;
    }
// hash table
int HashmajorityElement(vector<int>& arr) {
    int n = arr.size();
    map <int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it : mpp) {
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
    }
int main() {
    vector <int> arr = {2,2,1,1,1,2,2};
    cout << HashmajorityElement(arr);

    return 0;
}