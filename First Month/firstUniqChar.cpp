#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int firstUniqChar(vector<string>& arr, int k) {
    unordered_map<string,int> mpp;

    for(int i = 0; i<arr.size(); i++) {
        mpp[arr[i]]++;
    }   
    for(auto it : mpp) {
        
    }
}
int main() {
    vector<string> arr = {"d","b","c","b","c","a"};
    firstUniqChar(arr,2);
    return 0;
}