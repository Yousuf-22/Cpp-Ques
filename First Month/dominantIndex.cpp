#include<iostream> 
#include<vector>
using namespace std;
int secmaxele(vector <int> arr, int larele) {
    int secele = arr[0];
    for(int i = 1; i<arr.size(); i++) {
        if(secele < arr[i] && arr[i] != larele) {
            secele = arr[i]; 
        }
    }
    return secele;
}
int maxxele(vector <int> arr) {
    int larele = arr[0];
    int ind = 0;
    for(int i = 1; i<arr.size(); i++) {
        if(larele < arr[i]) {
            larele = arr[i]; 
            ind = i;
        }
    }
    int secele = secmaxele(arr,larele);
    cout << larele << endl;
    cout << secele << endl;

    if((secele * 2) == larele) {
        return ind;
    }
    if(secele == 0 and larele == 1) {
        return ind;
    }
    return -1;
}
int dominantIndex(vector<int>& nums) {
    int larele = maxxele(nums);
    return larele;
}
int main () {
    vector <int> arr = {3,6,1,0};

    cout << dominantIndex(arr);

    return 0;
}