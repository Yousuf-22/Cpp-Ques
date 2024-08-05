#include<vector>
#include<iostream>
using namespace std;
int removeElement(vector<int>& arr, int val) {
        vector <int> ans;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] != val){
                ans.push_back(arr[i]);
            }
        }
        return ans.size();
    }
int main() {
    vector <int> arr = {3,2,2,3};
    // bool ans = ismonotonic(arr);
    // cout << ans;
    int ans = removeElement(arr,2);
    cout << ans;

    return 0;
}