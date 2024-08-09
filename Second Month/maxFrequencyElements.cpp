#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int> mpp;
    int hfreq = 0;
    int cnt = 0;
    int sum = 0;
    for(int i : nums) {
        mpp[i]++;
    }
    for(auto it : mpp) {
        hfreq = max(hfreq,it.second);
        
    }
    for(auto it : mpp) {
        if(it.second == hfreq) {
            cnt++;
        }
    }
    if(hfreq == 1) {
        return nums.size();
    }
    return (cnt*hfreq);
}
int main() {
    vector<int> arr = {6,9,10,11,12,11};
    cout << maxFrequencyElements(arr);
    return 0;
}