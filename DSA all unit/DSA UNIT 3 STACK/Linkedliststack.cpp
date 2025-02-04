#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

struct mystack {
    Node* head;
    int sz;
    mystack() {
        head = nullptr;
        sz = 0;
    }
    
    void push(int x) {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    
    int pop() {
        if (head == nullptr) {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        int res = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        sz--;
        return res;
    }
    
    int peek() {
        if (head == nullptr) {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        return head->data;
    }
    
    int size() {
        return sz;
    }
    
    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {
    mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
