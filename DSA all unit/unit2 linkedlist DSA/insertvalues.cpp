// #include <iostream> 
// using namespace std; 
 
// // Node structure for the linked list 
// struct Node { 
//     int data; 
//     Node* next; 
//     Node(int val) { 
//         data = val; 
//         next = nullptr; 
//     } 
// }; 
 
// // Function to insert a node at the end of the list 
// void insert(Node*& head, int value) { 
//     Node* newNode = new Node(value); 
//     if (head == nullptr) { 
//         head = newNode; 
//         return; 
//     } 
//     Node* temp = head; 
//     while (temp->next != nullptr) { 
//         temp = temp->next; 
//     } 
//     temp->next = newNode; 
// } 
 
// // Function to display the linked list 
// void displayList(Node* head) { 
//     Node* temp = head; 
//     while (temp != nullptr) { 
//         cout << temp->data << " -> "; 
//         temp = temp->next; 
//     } 
//     cout << "NULL" << endl; 
// } 
 
// // Function to delete duplicate nodes in the linked list 
// void removeDuplicates(Node* head) { 
//     Node* current = head; 
 
//     // Iterate through the list 
//     while (current != nullptr && current->next != nullptr) { 
//         Node* runner = current; 
 
//         // Check for duplicates ahead 
//         while (runner->next != nullptr) { 
//             if (runner->next->data == current->data) { 
//                 // If a duplicate is found, delete it 
//                 Node* duplicate = runner->next; 
//                 runner->next = runner->next->next; 
//                 delete duplicate; 
//             } else { 
//                 runner = runner->next; 
//             } 
//         } 
//         current = current->next; 
//     } 
// } 
 
// // Main function to test the code 
// int main() { 
//     Node* head = nullptr; 
 
//     // Inserting values into the linked list (with duplicates) 
//     insert(head, 10); 
//     insert(head, 20); 
//     insert(head, 30); 
//     insert(head, 20); 
//     insert(head, 40); 
//     insert(head, 30); 
//     insert(head, 50); 
//     insert(head, 20); 
 
//     cout << "Original list: " << endl; 
//     displayList(head); 
 
//     // Remove duplicates 
//     removeDuplicates(head); 
 
//     cout << "List after removing duplicates: " << endl; 
//     displayList(head); 
 
//     return 0; 
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h> 
using namespace std; 

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Function to print the circular linked list
void printlist(Node *head) {
    if (head == NULL) return;
    Node *p = head;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

// Insert at the beginning of the circular linked list
Node* insertBegin(Node *head, int x) {
    Node *temp = new Node(x);
    if (head == NULL) {
        temp->next = temp;
    } else {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

// Insert at the end of the circular linked list
Node* insertEnd(Node *head, int x) {
    Node *temp = new Node(x);
    if (head == NULL) {
        temp->next = temp;
        return temp;
    }
    Node *curr = head;
    while (curr->next != head)
        curr = curr->next;
    curr->next = temp;
    temp->next = head;
    return head;
}

// Insert at any position in the circular linked list
Node* insertAtPos(Node *head, int pos, int x) {
    Node *temp = new Node(x);
    if (pos == 1) {
        head = insertBegin(head, x);
        return head;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr->next != head; i++) {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

// Delete from the beginning of the circular linked list
Node* deleteBegin(Node *head) {
    if (head == NULL) return NULL;
    if (head->next == head) {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != head)
        curr = curr->next;
    Node *temp = head;
    curr->next = head->next;
    head = head->next;
    delete temp;
    return head;
}

// Delete from the end of the circular linked list
Node* deleteEnd(Node *head) {
    if (head == NULL) return NULL;
    if (head->next == head) {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != head)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = head;
    delete temp;
    return head;
}

// Delete at any position in the circular linked list
Node* deleteAtPos(Node *head, int pos) {
    if (head == NULL) return NULL;
    if (pos == 1) return deleteBegin(head);
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr->next != head; i++) {
        curr = curr->next;
    }
    if (curr->next == head) return head;
    Node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;
}

int main() { 
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    cout << "Original List: ";
    printlist(head);

    // Insert at the beginning
    head = insertBegin(head, 15);
    cout << "After inserting 15 at the beginning: ";
    printlist(head);

    // Insert at the end
    head = insertEnd(head, 35);
    cout << "After inserting 35 at the end: ";
    printlist(head);

    // Insert at position 3
    head = insertAtPos(head, 3, 25);
    cout << "After inserting 25 at position 3: ";
    printlist(head);

    // Delete from the beginning
    head = deleteBegin(head);
    cout << "After deleting from the beginning: ";
    printlist(head);

    // Delete from the end
    head = deleteEnd(head);
    cout << "After deleting from the end: ";
    printlist(head);

    // Delete from position 3
    head = deleteAtPos(head, 3);
    cout << "After deleting from position 3: ";
    printlist(head);

    return 0;
}