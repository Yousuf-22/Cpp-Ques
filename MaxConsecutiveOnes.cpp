#include<iostream>
#include<vector>
using namespace std;
 int findMaxConsecutiveOnes(vector<int>& arr) {
    int cnt = 0;
    int ans = 0;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == 1) {
            cnt++;
            ans = max(ans,cnt);
        }
        else cnt = 0;
    }
    return ans;
    }
int main() {
    vector <int> arr = {1,0,1,1,0,1};

    cout << findMaxConsecutiveOnes(arr);
    return 0;
}