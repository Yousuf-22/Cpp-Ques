#include<iostream>
#include<vector>
using namespace std;
bool isArraySpecial(vector<int>& arr) {
    // Edge Case...
    if(arr.size() == 1) return true;

    for(int i=0; i<arr.size()-1; i++) {
        if(arr[i] % 2 != 0 and arr[i+1] % 2 != 0) {
            return false;
        }
         if(arr[i] % 2 == 0 and arr[i+1] % 2 == 0) {
            return false;
        }
    return true;
    }
}
int main() {
    vector <int> arr = {1};

    cout << isArraySpecial(arr) << endl;
    return 0;
}