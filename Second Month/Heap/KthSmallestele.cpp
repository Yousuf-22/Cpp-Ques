#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthsmallestEle(vector<int>& arr, int k) {
    priority_queue<int> maxx;

    for(int i = 0; i<arr.size(); i++) {
        if(maxx.size() > k) {
            maxx.pop();
        }
        else {
            maxx.push(arr[i]);
        }
    }
    return maxx.top();

}
int main() {
    vector<int> arr = {7,10,4,3,15};
    cout << kthsmallestEle(arr,3);
    return 0;
}