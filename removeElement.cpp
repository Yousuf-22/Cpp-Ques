#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
vector<int> sortedSquares(vector<int>& v) {
    for(int i = 0; i<v.size(); i++) {
        v[i] = v[i] * v[i];
    }
    sort(v.begin(), v.end());
    return v;
    }
int main() {
    vector <int> arr = {-4,-1,0,3,10};
    vector <int> ans = sortedSquares(arr);
    
    return 0;
}