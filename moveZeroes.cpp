#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& arr) {
    int n = arr.size();

    if(arr.size() == 1) {
        return;
    }
    int i = 0;
    int j = i+1;

    if(arr[i] != 0) {
        i++;
    }

    while(j < n) {
        
        if(arr[j] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
}

int main() {
    vector <int> arr = {0,1};
    moveZeroes(arr);
    for(int i:arr) {
        cout << i << " ";
    }
    return 0;
}