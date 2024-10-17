#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){}

    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }

    Node(int d, Node* n, Node* p) {
        data = d;
        next = n;
        prev = p;
    }

};

Node* Head(vector<int> arr) {
    if(arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* n = head;

    for(int i = 1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i],nullptr,n);
        n->next = temp;
        n = n->next;
    }
    return head;
}

void traversal(Node* head) {
    Node* temp = head;

    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* reverseDLL(Node* head) {

    if(head == NULL) return NULL;

    stack<int> st;

    Node* temp = head;

    while(temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }
    
    Node* temp2 = head;
    while(!st.empty()) {
        temp2->data = st.top();
        st.pop();
        temp2 = temp2->next;
    }   
    return head;
}
int main() {
    vector<int> arr = {};
    Node* head = Head(arr);

    traversal(reverseDLL(head));
    return 0;
}