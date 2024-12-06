#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maxCount(vector<int>& banned, int n, int maxSum) {
    unordered_map<int,bool> mpp;
    
    for(int i = 0; i<banned.size(); i++) {
        mpp[banned[i]] = true;
    }

    int sum = 0;
    int cnt = 0;

    for(int i = 1; i<=n; i++) {
        // i present in the mpp
        if(mpp.find(i) != mpp.end()) {
            continue;
        }

        sum += i;
        if(sum <= maxSum) {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    vector<int> arr = {11};
    cout << maxCount(arr,7,50);
    return 0;
}