#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& arr, int target) {
    int sum = 0;
    for(int i = 0; i<arr.size()-1; i++) {
        for(int j = i+1; j<arr.size(); j++) {
            sum = arr[i] + arr[j];
            if(sum == target) {
                return {i,j};
            }
            else{
                sum = 0;
            }
        }

    }
    return {0};
}
int main() {
    vector <int> arr = {3,2,4};
    int target = 6;

    vector <int> ans = twoSum(arr,target);

    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}