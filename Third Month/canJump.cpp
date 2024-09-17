#include<iostream>
#include<vector>
using namespace std;
bool canjump(vector<int>& arr) {

    int maxx = INT16_MIN;
    int ans = 0;
    for(int i = 0; i<arr.size(); i++) {
        ans = arr[i] + i;

        maxx = max(maxx, ans);
        if(maxx >= arr.size()-1) {
            return true;
        }
        else if(arr[i] == 0) {
            if(maxx == i) {
                return false;
            }
        }
    }
    return false;
}
int main() {
    vector<int> arr = {3,2,1};
    cout << canjump(arr);
    return 0;
}