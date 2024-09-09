#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int i = 0;
    int j = nums.size() - 1;

    while(i < j) {
        if(nums[j] == val) {
            j--;
        }
        else if(nums[i] == val) {
            swap(nums[i] , nums[j]);
            i++;
            j--;
        }
        else if(nums[i] != val) {
            i++;
        }
    }

    for(int x : nums) {
        cout << x << " ";
    }
    return j+1;
}
int main() {
    vector<int> arr = {0,1,4,6,7,2,5,2,6,26,2,4,6};
    cout << removeElement(arr,6);
    return 0;
}