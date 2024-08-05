#include<iostream>
#include<vector>
using namespace std;
vector<int> countBits(int n) {
    int arr[n+1];
    int sizee = sizeof(arr)/4;
    vector<int> ans;
    for(int i = 0; i<sizee; i++) {
        arr[i] = i;
        int cnt = 0;
        while(arr[i] > 0) {
            if(arr[i] & 1)  cnt++;
            arr[i] = arr[i] / 2;
        }
        ans.push_back(cnt);
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    countBits(n);
    return 0;
}