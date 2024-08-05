#include<iostream>
#include<vector>
#include<stack>
using namespace std;
    int minOperations(vector<string>& logs) {
        stack <string> s;
        for(int i = 0; i<logs.size(); i++) {
            if(logs[i] == "../" and s.size() != 0) {
                s.pop();
            }
            else if(logs[i] != "./" and logs[i] != "../"){
                s.push(logs[i]);
            }
        }
        cout << s.empty() << endl;
        return s.size();
    }
int main() {

    vector<string> str = {"./","../","./"};

    cout << minOperations(str);
    return 0;
}