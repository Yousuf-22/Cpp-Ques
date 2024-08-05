#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr, int m, vector<int>& brr, int n) {
    int i = 0;
    int j = 0;
    // n = brr.size()-1;
    while(i < arr.size()) {
        if(arr.size() == 1 && brr.empty()){
            arr[0] = arr[0];
            break;
        }

        if(arr[i] > brr[j]) {
            int temp = arr[i];
            arr[i] = brr[j];
            brr[j] = temp;
            i++;
        }

        while(brr[j] > brr[j+1] and j != n-1 && brr.empty() != 0) {
                int temp = arr[j];
                arr[j] = brr[j+1];
                brr[j+1] = temp;
                j++;
            
        }

        if(arr[i] == 0) {
            arr[i] = brr[j];
            j++;
        }
        i++;
    }
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    for(int i : brr) {
        cout << i << " ";
    }
    }
int main() {
    vector <int> arr = {1,3,7,8,0,0,0};
    vector <int> brr = {2,5,9};

    merge(arr,7,brr,3);
    
    return 0;
}