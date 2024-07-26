#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
vector<int> sortByBits(vector<int>& arr) {
    int n = arr.size();

    map <string,int> mpp;
    string s[n];

    for(int i = 0; i<arr.size(); i++) {
        if(arr[0] == 0) {

        }
        while(arr[i] > 0) {
            if(arr[i] % 2 == 0) s[i] += '0';
            else s[i] += '1';   
            arr[i] = arr[i] / 2;
        }
        reverse(s[i].begin(), s[i].end());
    }
    for(int i = 0; i<n; i++) {
        cout << s[i] << " ";
    }
}
int main() {
    vector <int> arr = {0,1,2,3,4,5,6,7,8};
    sortByBits(arr);
    return 0;
}