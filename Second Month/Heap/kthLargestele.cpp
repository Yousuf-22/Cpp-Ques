#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthlargestele(vector<int>& arr, int k) {

    priority_queue<int,vector<int>, greater<int>> minn;
    for(int i = 0; i<arr.size(); i++) {
        if(minn.size() > k) {
            minn.pop();
        }
        else {
            minn.push(arr[i]);
        }
    }

    while(!minn.empty()) {
        cout << minn.top() << " ";
        minn.pop();
    }
}
int main() {
    vector<int> arr = {7,10,4,3,20,15};
    kthlargestele(arr,3);
    return 0;
}