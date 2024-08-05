#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    vector <string> name = {"Alice","Bob","Bob"};
    vector <int> height = {17233,32521,14087,42738,46669,65662,43204,8224};
    vector <string> ans = sortPeople(name, height);

    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}