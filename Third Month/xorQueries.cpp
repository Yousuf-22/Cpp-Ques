#include<iostream>
#include<vector>
using namespace std;
vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {

    vector<int> ans;
    for(int i = 0; i<queries.size(); i++) {
        int x = 0;
        int y = 0;
        x = queries[i][0];
        y = queries[i][1];
        int xorr = 0;
        for(int j = x; j<=y; j++) {
            xorr ^= arr[j];
        }
        ans.push_back(xorr);
    }  
    return ans;
}
int main() {
    vector<int> arr = {4,8,2,10};
    vector<vector<int>> q = {{2,3},{1,3},{0,0},{0,3}};
    xorQueries(arr,q);
    return 0;
}