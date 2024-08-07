#include<iostream>
#include<vector>
#include<map>
using namespace std;
string kthDistinct(vector<string>& arr, int k) {
    map<string,int> mpp;
    int cnt = 0;

    for(string x : arr) {
        mpp[x]++;
    }

    for(string x : arr) {
        if(mpp[x] == 1) {
            cnt++;
            if(cnt == k) return x;  
        }
    }
    return "";
}
int main() {
    vector<string> arr = {"d","b","c","b","c","a"};
    kthDistinct(arr,2);
    return 0;
}