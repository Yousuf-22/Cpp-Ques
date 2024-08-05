    #include<iostream>
    #include<map>
    #include<vector>
    using namespace std; 
    int main() {
        vector <string> str = {"ABAB"};   
        map <int, string> hash = {0,0};

        for(int i = 0; i<str.size(); i++) {
            hash[(str[i] - 'A')]++;
        }

        for(auto it : hash) {
            // (key value)
            cout << it.first << " " << it.second << endl;
        }   

        return 0;
    }