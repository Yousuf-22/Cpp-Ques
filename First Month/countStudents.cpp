// #include<iostream>
// #include<vector>
// #include<stack>
// #include<queue>
// using namespace std;
// int countStudents(vector<int>& students, vector<int>& sandwiches) {
//     stack<int> sandwichesline;
//     int cnt = 0;

//         for(int i = sandwiches.size()-1; i>=0; i--) {
//             sandwichesline.push(sandwiches[i]);
//         }

//         int firstele = 0;
//         // If 1 & 0 or 0 & 1
//         if(students[firstele] != sandwichesline.top()) {
//             int temp = students[firstele];
//             for(int i = firstele+1; i<students.size(); i++) {
//                 students[i-1] = students[i];
//                 if(i == students.size()-1) students[i] = temp;
//             }
//             }
//         // If both are equal
//         else{
//             sandwichesline.pop();
//             firstele++;
//         }
//         if(students.size() != sandwichesline.size()) {
//             return students.size();
//         }
//         return 0;
//         }

// int main() {
//     vector<int> students = {1,1,1,0,0,1};
//     vector<int> sandwiches = {1,0,0,0,1,1};
//     cout << countStudents(students,sandwiches);
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countStudents(vector<int>& students, vector<int>& sandwiches) {
    vector<pair <int,int>> prr;
    int cnt = 0;
    sort(students.begin(),students.end());    
    sort(sandwiches.begin(),sandwiches.end()); 

    for(int i = 0; i<students.size(); i++) {
        prr.push_back({students[i],sandwiches[i]});
    }

    for(auto it : prr) {
        if(it.first == it.second) cnt++;
    }
    return prr.size() - cnt;
}
int main() {
    vector<int> students = {0,0,0,1,0,1,1,1,1,0,1};
    vector<int> sandwiches = {0,0,0,1,0,0,0,0,0,1,0};
    cout << countStudents(students,sandwiches);
    return 0;
}