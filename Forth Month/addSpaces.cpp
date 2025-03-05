#include<iostream>
#include<vector>
using namespace std;
string addSpaces(string s, vector<int>& spaces) {
    string ans;
    int j = 0;
    for(int i = 0; i<s.size(); i++) {
        if(j < spaces.size() and i == spaces[j]) {
            ans += ' ';
            j++;
        }
        ans += s[i];
    }
    return ans;
}    
int main() {
    string s = "icodeinpython";
    vector<int> arr = {1,5,7,9};
    cout << addSpaces(s,arr);
    return 0;
}