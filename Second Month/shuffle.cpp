#include<iostream>
#include<vector>
using namespace std;
vector<int> shuffle(vector<int>& arr, int n) {
    vector<int> ans(arr.size());

    int i = 0;
    int j = n;
    int k = 0;
    while(j < arr.size()) {
        ans[k++] = arr[i];
        ans[k++] = arr[j];
        i++;
        j++;
    }
}
int main() {
    vector<int> arr = {1,2,3,4,4,3,2,1};
    shuffle(arr,4);
    return 0;
}