#include<iostream>
#include<vector>
#include<map>
using namespace std;
int singleNumber(vector<int>& arr) {
        map <int,int> mpp;
        for(int i = 0; i<arr.size(); i++) {
            mpp[arr[i]]++;
        }

        for(auto it : mpp) {
            if(it.second == 1) {
                return it.first;
            }
        }
        return 0;
    }
int main() {
    vector<int> arr = {5,5,5,1,2,2,2};
    cout << singleNumber(arr);
    return 0;
}