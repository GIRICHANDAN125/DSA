
//// double linked list
#include <bits/stdc++.h>  
using namespace std; 
 
struct Node { 
    int data; 
    Node* prev; 
    Node* next; 
    Node(int d) { 
        data = d; 
        prev = NULL; 
        next = NULL; 
    } 
}; 
 
// Function to print the doubly linked list 
void printlist(Node* head) { 
    Node* curr = head; 
    while (curr != NULL) { 
        cout << curr->data << " "; 
        curr = curr->next; 
    } 
    cout << endl; 
} 
 
// Insert at the beginning of the doubly linked list 
Node* insertBegin(Node* head, int data) { 
    Node* temp = new Node(data); 
    temp->next = head; 
    if (head != NULL) head->prev = temp; 
    return temp; 
} 
 
// Insert at the end of the doubly linked list 
Node* insertEnd(Node* head, int data) { 
    Node* temp = new Node(data); 
    if (head == NULL) return temp; 
     
    Node* curr = head; 
    while (curr->next != NULL) 
        curr = curr->next; 
     
    curr->next = temp; 
    temp->prev = curr; 
    return head; 
} 
 
// Insert at any position in the doubly linked list 
Node* insertAtPos(Node* head, int pos, int data) { 
    if (pos == 1) { 
        return insertBegin(head, data); 
    } 
    Node* temp = new Node(data); 
    Node* curr = head; 
     
    for (int i = 1; i < pos - 1 && curr != NULL; i++) { 
        curr = curr->next; 
    } 
     
    if (curr == NULL) return head; // Position out of bounds 
     
    temp->next = curr->next; 
    if (curr->next != NULL) curr->next->prev = temp; 
    curr->next = temp; 
    temp->prev = curr; 
    return head; 
} 
 
// Delete from the beginning of the doubly linked list 
Node* deleteBegin(Node* head) { 
    if (head == NULL) return NULL; 
    Node* temp = head; 
    head = head->next; 
    if (head != NULL) head->prev = NULL; 
    delete temp; 
    return head; 
} 
 
// Delete from the end of the doubly linked list 
Node* deleteEnd(Node* head) { 
    if (head == NULL) return NULL; 
    if (head->next == NULL) { 
        delete head; 
        return NULL; 
    } 
    Node* curr = head; 
    while (curr->next != NULL) 
        curr = curr->next; 
     
    curr->prev->next = NULL; 
    delete curr; 
    return head; 
} 
 
// Delete from any position in the doubly linked list 
Node* deleteAtPos(Node* head, int pos) { 
    if (head == NULL) return NULL; 
    if (pos == 1) return deleteBegin(head); 
     
    Node* curr = head; 
    for (int i = 1; i < pos && curr != NULL; i++) { 
        curr = curr->next; 
    } 
     
    if (curr == NULL) return head; // Position out of bounds 
     
    if (curr->next != NULL) curr->next->prev = curr->prev; 
    if (curr->prev != NULL) curr->prev->next = curr->next; 
    delete curr; 
    return head; 
} 
 
int main() { 
    Node* head = new Node(10); 
    Node* temp1 = new Node(20); 
    Node* temp2 = new Node(30); 
     
    head->next = temp1; 
    temp1->prev = head; 
    temp1->next = temp2; 
    temp2->prev = temp1; 
     
    cout << "Original List: "; 
    printlist(head); 
     
    // Insert at the beginning 
    head = insertBegin(head, 5); 
    cout << "After inserting 5 at the beginning: "; 
    printlist(head); 
     
    // Insert at the end 
    head = insertEnd(head, 40); 
    cout << "After inserting 40 at the end: "; 
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