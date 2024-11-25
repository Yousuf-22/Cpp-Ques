#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){};

    Node(int d) {
        data = d;
        next = nullptr;
    }

    Node(int d, Node* n) {
        data = d;
        next = n;
    }
};

Node* Head(vector<int> arr) {
    Node* head = new Node (arr[0]);

    Node* t = head;
    for(int i = 1; i<arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        t->next = temp;
        t = temp;
        // For circular
        /*if(i == arr.size()-1) {
            Node* temp = new Node(arr[i],head);
            t->next = temp;
            t = temp;
        }*/
        
    }
    return head;
}

void traversal(Node* Head) {

    while(Head != nullptr) {
        cout << Head->data << " ";
        Head = Head->next;
    }
}

Node* evenOdd(Node* Head) {
    
    vector<int> arr;
    Node* odd = Head;
    Node* even = Head->next;

    while(odd != nullptr and odd->next != nullptr) {
        arr.push_back(odd->data);
        odd = odd->next->next;
    }

    while(even != nullptr and even->next != nullptr) {

        arr.push_back(even->data);
        even = even->next->next;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    for(int i = 0; i<arr.size(); i++) {
        Node* t = new Node (arr[i]);
        temp->next = t;
        temp = t;
    }   

    return ans->next;
}

Node* oddevenOptimal(Node* Head) {
    Node* temp = Head;
    Node* temp2 = Head->next;

    while(temp != nullptr and temp->next != nullptr) {
        temp->next = temp->next->next;
        temp = temp->next->next;
    }

    while(temp2 != nullptr and temp2->next != nullptr) {
        temp2->next = temp2->next->next;
        temp2 = temp2->next->next;
    }

    while(Head != nullptr) {
        cout << Head->data << " ";
        Head = Head->next;
    }
}

Node* sortby012(Node* head) {
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    Node* temp = head;
    while(temp != nullptr) {
        if(temp->data == 0) {
            cnt0++;
            temp = temp->next;
        }
        else if(temp->data == 1) {
            cnt1++;
            temp = temp->next;
        } 
        else if(temp->data == 2) {
            cnt2++;
            temp = temp->next;
        }
    }
    Node* temp2 = head;
    while(temp2 != nullptr) {
        if(cnt0) {
            temp2->data = 0;
            cnt0--;
            temp2 = temp2->next;
        }
        if(cnt0 == 0 and cnt1 > 0) {
            temp2->data = 1;
            cnt1--;
            temp2 = temp2->next;

        }
        else if(cnt0 == 0 and cnt1 == 0) {
            temp2->data = 2;
            cnt2--;
            temp2 = temp2->next;
        }
    }
    return head;
}

Node* sortby012Optimal(Node* head) {

    Node* node0 = new Node(-1);
    Node* N0 = node0;

    Node* node1 = new Node(-1);
    Node* N1 = node1;

    Node* node2 = new Node(-1);
    Node* N2 = node2;

    Node* temp = head;

    while(temp != nullptr) {
        if(temp->data == 0) {
            Node* temp = new Node(0);
            N0->next = temp;
            N0 = temp;
        }
        else if(temp->data == 1) {
            Node* temp = new Node(1);
            N1->next = temp;
            N1 = temp;
        }
        else if(temp->data == 2) {
            Node* temp = new Node(2);
            N2->next = temp;
            N2 = temp;
        }
        temp = temp->next;
    }
    N0->next = node1->next;
    N1->next = node2->next;

    return node0->next;
}
int LenofLL(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}
Node* removeNthFromEnd(Node* head, int n) {
    Node* temp = head;

    int len = LenofLL(temp);
    int cnt = 0;

    if(head == NULL) return NULL;
    if(head->next == NULL and n == 1) return NULL;


    if(n > len) return head;
    if(len == n) return head->next;
    if(n == 1) {
        while(temp != nullptr) {
            if(temp->next->next == nullptr) {
                temp->next = nullptr;
                break;
            }
            temp = temp->next;
        }
        return head;
    }

    while(temp != nullptr) {
        cnt++;
        if((len - n) == cnt) {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
    } 
    return head;
}

Node* deleteNodeByNum(Node* head, int n) {
    Node* temp = head;
    while(n > 0) {
        temp = temp->next;
        n--;
    }
    Node* slow = head;
    Node* high = temp;

    while(high != nullptr and high->next == nullptr) {
        slow = slow->next;
        high = high->next->next;
    }
    if(high->next == nullptr) {
            return head->next;
        }
    slow->next = slow->next->next;
    
    return head;
}

Node* reverseLL(Node* head) {
    Node* temp = head;
    stack <int> st;

    while(temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }
    Node* temp2 = head;

    while(temp2 != nullptr) {
        temp2->data = st.top();
        st.pop();
        temp2 = temp2->next;
    }
    return head;
}

bool palindrome(Node* head) {
    Node* temp = head;
    stack<int> st;

    while(temp != nullptr) {
        st.push(temp->data);
        temp = temp->next;
    }

    Node* tempp = head;
    while(tempp != nullptr) {
        if(tempp->data != st.top()) {
            return false;
        }
        st.pop();
        tempp = tempp->next;
    }
    return true;
}

Node* reverseLLOptimal(Node* head) {
    Node* temp = head;
    Node* prev = nullptr;
    Node* front;

    while(temp != nullptr) {
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

bool hasCycle(Node* head) {
    Node* temp = head;
    unordered_map<Node*,int> mpp;


    while(temp != nullptr) {
        if(mpp.find(temp) != mpp.end()) {
            return true;
        }
        mpp[temp]++;
        temp = temp->next;
    }
    return false;
}

int lenOfCircular(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr and fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
         
        if(slow == fast) {
            Node* slow = slow->next;
            int len = 1;
            while(slow != fast) {
                len++;
                slow = slow->next;
            }
            return len;
        }
        
    }
    return -1;
}

Node* addTwoNumbers(Node* l1, Node* l2) {

    long long sum = 0;
    int carry = 0;
    int newNode = 0;

    Node* ans = new Node(0);
    Node* prev = ans;

    while(l1 or l2) {
        sum = 0;

        if(l1) {
            sum += l1->data;
            l1 = l1->next;
        }
        if(l2) {
            sum += l2->data;
            l2 = l2->next;
        }
    
        sum += carry;
        carry = sum/10;
        newNode = sum%10;

        Node* temp = new Node(newNode);
        prev->next = temp;
        prev = temp;

    }     
    if(carry) {
        Node* temp = new Node(carry);
        prev->next = temp;
    }

    return ans->next;   
}

int main() {
    vector<int> arr = {1,2,3,4,5,8,5,65,76};
    vector<int> brr = {9,1,8};
    Node* t1 = Head(arr);
    Node* t2 = Head(brr);

   cout << (lenOfCircular(t1));

    return 0;
}