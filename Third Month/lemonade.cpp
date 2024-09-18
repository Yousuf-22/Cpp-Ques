#include<iostream>
#include<vector>
using namespace std;
bool lemonadechange(vector<int>& arr) {
    int five = 0;
    int ten = 0;
    int twenty = 0;

    for(int i = 0; i<arr.size(); i++) {
        if(arr[i] == 5) {
            five++;
        }
        if(arr[i] == 10) {
            if(five != 0) {
                five--;
                ten++;
            }
            else {
                return false;
            }
        }
        if(arr[i] == 20) {
            if(five >= 3) {
                five -= 3;
                twenty++;
            }
            else if(five != 0 and ten != 0) {
                five--;
                ten--;
                twenty++;
            }
            else {
                return false;
            }
        }
    }
    return true;
}
int main() {
    vector<int> arr = {5,5,10,10,20};
    cout << lemonadechange(arr);
    return 0;
}