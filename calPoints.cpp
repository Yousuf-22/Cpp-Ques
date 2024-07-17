#include<iostream>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;
vector <int> calPoints(vector<string>& str) {
    int sum = 0;
    vector <int> v;
    int n = v.size();
    for(int i = 0; i<str.size(); i++) {
        if(str[i] == "C" and v.size() != 0) {
            v.pop_back();
        }
        else if(str[i] == "D" and v.size() != 0) {
            int x = (int)v[n-1];
            v.push_back(v[n-1] * 2);
            cout << ;
        }
        else if(str[i] == "+") {
            v.push_back(v[n-1] + v[n-2]);
            
        }
        else{
            int x = stoi(str[i]);
            v.push_back(x);
            // cout << x << " " <<endl;
        }
        

    }
    return v;
    }
int main() {
    vector <string> s = {"5","2","C","D","+"};
    vector <int> ans = calPoints(s);

    // for(int i = 0; i<ans.size(); i++) {
    //     cout << ans[i] << " ";
    // }
    return 0;
}