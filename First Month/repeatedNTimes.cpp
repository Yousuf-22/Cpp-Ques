#include <bits/stdc++.h>
using namespace std;
int repeatedNTimes(vector<int>& arr) {
    vector<int> ans;

    // for(int i: arr) {
    //     if(count(ans.begin() , ans.end() , i)){
    //         return i;
    //     }
    //     else{
    //         ans.push_back(i);
    //     }
    // }
    for(int i = 0; i<arr.size(); i++) {
        if(count(ans.begin(), ans.end(), arr[i])){
            return arr[i];
        }
        else{
            ans.push_back(arr[i]);
        }
    }
}
int main() {
    vector<int> arr = {1,2,2,1};
    cout << repeatedNTimes(arr);
    return 0;
}