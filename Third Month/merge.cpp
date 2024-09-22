#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr, vector<int>& brr) {
    vector<int> ans;

    int i = 0;
    int j = 0;

    while(j < brr.size()) {
        if(arr[i] > brr[j]) {
            // cout << brr[j];
            ans.push_back(brr[j]);
            j++;
        } 
        if(arr[i] <= brr[j] and i < brr.size()) {
            // cout << arr[i];
            ans.push_back(arr[i]);
            if(i < brr.size()) {
                i++;
            }
        }
        else {
            // cout << brr[j];
            ans.push_back(brr[j]);
            j++;
        }
           
    }
    for(int i = 0; i<ans.size(); i++) {
        arr[i] = ans[i];
    }
}
int main() {
    vector<int> arr = {0};
    vector<int> brr = {1};
    merge(arr,brr);
    return 0;
}