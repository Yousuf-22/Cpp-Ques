#include<iostream> 
#include<vector>
using namespace std;
int Secmaximum(vector <int> & arr, int maxx) {
    int secmaxx = arr[0];
    for(int i = 0; i<arr.size(); i++) {
        if(arr[i] > secmaxx and arr[i] != arr[maxx]) {
            secmaxx = arr[i];
        }
        
    }
    if(secmaxx == 0) secmaxx = arr[maxx];
    return secmaxx;
}
int maximum(vector <int> & arr) {
    int maxx = arr[0];
    for(int i = 0; i<arr.size(); i++) {
        if(arr[i] > maxx) {
            maxx = i;
        }
    }
    return maxx;
}
int dominantIndex(vector<int>& arr) {
    int maxx = maximum(arr);
    int secmaxx = Secmaximum(arr,maxx);
    cout << maxx << endl;
    cout << secmaxx << endl;
    if(arr[maxx] == (secmaxx * secmaxx)) {
        return maxx;
    }
    if(secmaxx == 0) {
        return maxx;
    }
    return -1;
}
int main () {
    vector <int> arr = {3,6,1,0};

    cout  << "Ans : "<< dominantIndex(arr);

    return 0;
}