#include<iostream>
#include<vector>
using namespace std;
vector<int> replaceElements(vector <int> &arr) {
    
    for(int i = 0; i<arr.size()-1; i++) {
        int maxx = INT16_MIN;
        for(int j = i+1; j<arr.size(); j++) {
            if(maxx < arr[j]) {
                maxx = arr[j];
            }
            arr[i] = maxx;
        }
    }
    arr[arr.size()-1] = -1;
    return arr;
}
int main() {
    vector <int> arr = {17,18,5,4,6,1};
    vector <int> ans = replaceElements(arr);
    for(int i=0; i<ans.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}