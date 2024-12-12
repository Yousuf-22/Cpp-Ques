#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
long long pickGifts(vector<int>& gifts, int k) {
    long long ans = 0;
    priority_queue<int> maxx;

    for(int i : gifts) {
        maxx.push(i);
    }           

    while(k--) {
        int topp = maxx.top();
        maxx.pop();
        int sqr = floor(sqrt(topp));
        maxx.push(sqr);
    }

    while(!maxx.empty()) {
        ans += maxx.top();
        maxx.pop();
    }

    return ans;
}
int main() {
    vector<int> arr = {1,1,1,1};
    cout << pickGifts(arr,4);
   
    return 0;
}