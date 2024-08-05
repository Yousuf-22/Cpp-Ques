#include<iostream>
#include<string>
#include<vector>
using namespace std;
int countSeniors(vector<string>& details) {
    for(int i = 0; i<details.size(); i++) {
        for(int j = 0; j<details[i].length(); j++) {
            cout << details[i,j] << " ";
        }
    }
}
int main() {
    vector <string> str = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    countSeniors(str);
    return 0;
}