#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;
vector<int> kclosestnum(vector<int>& arr, int k, int x) {
    priority_queue <pair<int,int>> maxx;

    for(int i = 0; i<arr.size(); i++) {
        if(maxx.size() > k) {
            maxx.pop();
        }
        else {
            maxx.push({abs(arr[i] - x), arr[i]});
        }
    }
    while(!maxx.empty()) {
        cout << maxx.top().second << endl;
        maxx.pop();
    }
}
int main() {
    vector<int> arr = {5,6,7,8,9};
    kclosestnum(arr,3,7);
    return 0;
}