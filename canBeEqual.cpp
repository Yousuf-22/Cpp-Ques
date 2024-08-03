#include <bits/stdc++.h>
using namespace std;
bool canBeEqual(vector<int>& target, vector<int>& arr) {
    unordered_map<int,int> mpp;

    // same same
    for(int i : target) {
        mpp[i]++;
    }

    // same same
    // for(int i = 0; i<target.size(); i++) {
    //     mpp[target[i]]++;
    // }
    for(int i : arr) {
        mpp[i]--;
    }

    for(auto it : mpp) {
        if(it.second !=  0) return false;
    }
    
    return true;
}
int main() {
    vector<int> a = {3,7,9};
    vector<int> arr = {3,7,11};
    cout << canBeEqual(a,arr);
    return 0;
}