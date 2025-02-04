
///// traversal

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// int main(){
//     Node *chandu=new Node(10);
//     Node *temp1=new Node(20);
//     Node *temp2=new Node(30);
//     chandu->next=temp1;
//     temp1->next=temp2;
//     cout<<chandu->data<<"-->"<<temp1<<"-->"<<temp2->data;
//     return 0;
// }

// //// insertbegin

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data =x;
//         next = NULL;
//     }

// };
// void printlist(Node *head){
//     Node *curr=head;
//     while(curr){
//         cout<<curr->data;
//         if(curr->next){
//             cout<<"-->";
//         }
//         curr=curr->next;
//     }
//     cout<<endl;

// }
// int main(){
//     Node *head = new Node(10);
//     head ->next=new Node(20);
//     head ->next ->next=new Node(30);
//     head ->next ->next ->next = new Node(40);
//     printlist(head);
//     return 0;
// }



// // //// insert end
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// Node* insertend(Node* head, int x) {
//     Node* temp = new Node(x);
//     if (head == NULL) {
//         return temp; // If the list is empty, return the new node as the head
//     }
    
//     Node* curr = head; // Use curr for traversal
//     while (curr->next != NULL) { // Traverse to the end of the list
//         curr = curr->next;
//     }
//     curr->next = temp; // Link the new node at the end
//     return head; // Return the head of the list
// }

// void printList(Node* head) {
//     Node* curr = head;
//     while (curr != NULL) {
//         cout << curr->data;
//         if (curr->next != NULL) {
//             cout << "-->";
//         }
//         curr = curr->next;
//     }
//     cout << endl; // Added a newline at the end for better formatting
// }

// int main() {
//     Node* head = NULL;
//     head = insertend(head, 10);
//     head = insertend(head, 20);
//     head = insertend(head, 30);
//     printList(head); // Output: 10-->20-->30
//     return 0;
// }


// // #include <iostream>
// // using namespace std;

// // struct Node {
// //     int data;
// //     Node* next;
// // };

// // void insertEnd(Node** head, int data) {
// //     Node* newNode = new Node();
// //     newNode->data = data;
// //     newNode->next = NULL;

// //     if (*head == NULL) {
// //         *head = newNode;
// //         return;
// //     }

// //     Node* temp = *head;
// //     while (temp->next != NULL) {
// //         temp = temp->next;
// //     }
// //     temp->next = newNode;
// // }

// // void printList(Node* node) {
// //     while (node != NULL) {
// //         cout << node->data << " ";
// //         node = node->next;
// //     }
// // }

// // int main() {
// //     Node* head = NULL;

// //     insertEnd(&head, 10);
// //     insertEnd(&head, 20);
// //     insertEnd(&head, 30);

// //     printList(head);

// //     return 0;
// // }


