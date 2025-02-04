// oblem Statement



// Lena is a librarian managing a list of books in her library. Each book is represented by an integer ID. Lena needs to update her list by adding a new book ID to the beginning of the list, another ID to the end, and a third ID at a random position within the list. 



// Your task is to help Lena implement a function to perform these insertions and manage the book list efficiently.

// Input format :
// The first line of input consists of an integer N, the number of existing books in the list.

// The second line contains N integers, each representing the ID of a book.

// The third line contains an integer B, the ID of the book to be added at the beginning.

// The fourth line contains an integer E, the ID of the book to be added at the end.

// The fifth line contains an integer p, the position at which the third ID will be inserted (0-based index).

// The sixth line contains an integer R, the ID of the book to be added at p.

// Output format :
// The output prints the updated list of book IDs after performing the insertions.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the given test cases will fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ book ID ≤ 1000

// 0 ≤ p ≤ N

// Sample test cases :
// Input 1 :
// 3
// 100 200 300
// 10 
// 20
// 1
// 30
// Output 1 :
// 10 30 100 200 300 20 
// Input 2 :
// 5
// 101 102 103 104 105
// 200
// 300
// 4
// 400
// Output 2 :
// 200 101 102 103 400 104 105 300 
// Input 3 :
// 2
// 11 22
// 10 
// 20
// 2
// 30
// Output 3 :
// 10 11 30 22 20 
// theme
// instruction
// Fill your code here
// C++ (17)
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) : data(data), next(nullptr) {}
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() : head(nullptr) {}

//     void insertAtBeginning(int newID) {
//         Node* newNode = new Node(newID);
//         newNode->next = head;
//         head = newNode;
//     }

//     void insertAtEnd(int newID) {
//         Node* newNode = new Node(newID);
//         if (head == nullptr) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     void insertAtPosition(int position, int newID) {
//         if (position == 0) {
//             insertAtBeginning(newID);
//             return;
//         }
//         Node* newNode = new Node(newID);
//         Node* temp = head;
//         for (int i = 0; i < position - 1 && temp != nullptr; i++) {
//             temp = temp->next;
//         }
//         if (temp == nullptr) return; // Position out of bounds
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     void printList() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }

//     ~LinkedList() {
//         Node* temp;
//         while (head != nullptr) {
//             temp = head;
//             head = head->next;
//             delete temp;
//         }
//     }
// };

// int main() {
//     int N;
//     cin >> N;

//     LinkedList books;
//     int bookID;

//     for (int i = 0; i < N; i++) {
//         cin >> bookID;
//         books.insertAtEnd(bookID);
//     }

//     int B, E, p, R;
//     cin >> B >> E >> p >> R;

//     books.insertAtBeginning(B);
//     books.insertAtEnd(E);
//     books.insertAtPosition(p, R);

//     books.printList();

//     return 0;
// }



// Single File Programming Question
// Problem Statement



// Raj, a mechanic, uses a linked list to track the cars waiting for repair. He needs to remove a car with a particular license plate number and also delete a car from a specific position in his list. Assist Raj by writing a program that allows him to perform these deletions based on given inputs.

// Input format :
// The first line of input consists of an integer N, the number of cars in the list.

// The second line contains N integers, each representing the license plate number of a car.

// The third line contains an integer R, the license plate number of the car to be removed.

// The fourth line contains an integer P, the position (0-based index) of the car to be removed.

// Output format :
// The output prints the updated list of license plate numbers after performing the deletions.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the given test cases will fall under the following constraints:

// 3 ≤ N ≤ 10

// 1000 ≤ license plate number ≤ 9999

// R is present in the list.

// Sample test cases :
// Input 1 :
// 3
// 1111 2222 3333
// 1111
// 0
// Output 1 :
// 3333 
// Input 2 :
// 5
// 1011 1034 1900 8789 9899
// 9899
// 3
// Output 2 :
// 1011 1034 1900 


// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int licensePlate;
//     Node* next;

//     Node(int licensePlate) : licensePlate(licensePlate), next(nullptr) {}
// };

// Node* createNode(int licensePlate) {
//     return new Node(licensePlate);
// }

// Node* deleteByPlate(Node* head, int plateToRemove) {
//     if (head == nullptr) return nullptr; // List is empty

//     // Handle removal of head
//     if (head->licensePlate == plateToRemove) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node* current = head;
//     while (current->next != nullptr && current->next->licensePlate != plateToRemove) {
//         current = current->next;
//     }

//     // If plate is found
//     if (current->next != nullptr) {
//         Node* temp = current->next;
//         current->next = current->next->next;
//         delete temp;
//     }

//     return head;
// }

// Node* deleteByPosition(Node* head, int position) {
//     if (head == nullptr) return nullptr; // List is empty

//     // Handle removal of head
//     if (position == 0) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node* current = head;
//     for (int i = 0; i < position - 1; i++) {
//         if (current == nullptr) return head; // Position is out of bounds
//         current = current->next;
//     }

//     // If current is null or current->next is null, position is out of bounds
//     if (current == nullptr || current->next == nullptr) return head;

//     Node* temp = current->next;
//     current->next = current->next->next;
//     delete temp;

//     return head;
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->licensePlate << " ";
//         temp = temp->next;
//     }
// }

// int main() {
//     int N;
//     cin >> N;

//     Node* head = nullptr;
//     Node* tail = nullptr;

//     for (int i = 0; i < N; i++) {
//         int licensePlate;
//         cin >> licensePlate;
//         Node* newNode = createNode(licensePlate);
//         if (head == nullptr) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     int plateToRemove, positionToRemove;
//     cin >> plateToRemove;
//     cin >> positionToRemove;

//     head = deleteByPlate(head, plateToRemove);
//     head = deleteByPosition(head, positionToRemove);

//     printList(head);

//     return 0;
// }


// Problem Statement



// Jake maintains a linked list of his gym members, each represented by a unique membership number. Jake needs to check if a particular membership number is part of his list of active members. Write a solution to help Jake find out if the membership number exists in his linked list.

// Input format :
// The first line of input consists of an integer N, the number of active gym members in the list.

// The second line contains N integers, each representing a unique membership number of an active gym member.

// The third line contains an integer M, representing the membership number that Jake needs to check in the list.

// Output format :
// The output prints "Membership number M is active" if the membership number exists in the list.

// Otherwise, the output prints "Membership number M is not in the list".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the given test cases will fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ membership number ≤ 1000

// Sample test cases :
// Input 1 :
// 2
// 889 911
// 977
// Output 1 :
// Membership number 977 is not in the list
// Input 2 :
// 3
// 100 200 300
// 100
// Output 2 :
// Membership number 100 is active
// theme
// instruction
// Fill your code here
// C++ (17)
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int membershipNumber;
//     Node* next;

//     Node(int membershipNumber) : membershipNumber(membershipNumber), next(nullptr) {}
// };

// Node* createNode(int membershipNumber) {
//     return new Node(membershipNumber);
// }

// bool isMemberInList(Node* head, int membershipToCheck) {
//     Node* current = head;
//     while (current != nullptr) {
//         if (current->membershipNumber == membershipToCheck) {
//             return true; // Membership number found
//         }
//         current = current->next;
//     }
//     return false; // Membership number not found
// }

// int main() {
//     int N;
//     cin >> N;

//     Node* head = nullptr;
//     Node* tail = nullptr;

//     for (int i = 0; i < N; i++) {
//         int membershipNumber;
//         cin >> membershipNumber;
//         Node* newNode = createNode(membershipNumber);
//         if (head == nullptr) {
//             head = newNode;
//             tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     int membershipToCheck;
//     cin >> membershipToCheck;

//     if (isMemberInList(head, membershipToCheck)) {
//         cout << "Membership number " << membershipToCheck << " is active" << endl;
//     } else {
//         cout << "Membership number " << membershipToCheck << " is not in the list" << endl;
//     }

//     // Cleanup: Free the allocated memory (optional for this example)
//     Node* temp;
//     while (head != nullptr) {
//         temp = head;
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }



// m Statement



// Nina, a vet, keeps track of various pets for checkups using a circular linked list. Each pet is represented by an integer code. Nina wants to traverse the list of pets, add a new pet to the end of the list, and remove a pet based on its code. Implement a solution to help Nina with these tasks.

// Input format :
// The first line of input consists of an integer N, the number of pets currently in the circular linked list.

// The second line contains N integers, each representing a pet code.

// The third line contains an integer M, the code of the new pet to be added to the end of the list.

// The fourth line contains an integer R, the code of the pet to be removed from the list.

// Output format :
// The first line of output prints the list of pet codes after inserting the new pet at the end.

// The second line prints the list of pet codes after removing the specified pet code.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// 1 ≤ pet code ≤ 100

// R is present in the list.

// Sample test cases :
// Input 1 :
// 7
// 12 59 23 70 71 34 78
// 88
// 12
// Output 1 :
// 12 59 23 70 71 34 78 88 
// 59 23 70 71 34 78 88 
// Input 2 :
// 5
// 32 28 49 26 18
// 99
// 28
// Output 2 :
// 32 28 49 26 18 99 
// 32 49 26 18 99 
// theme
// instruction
// Fill your code here
// C++ (17)

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int petCode;
//     Node* next;

//     Node(int petCode) : petCode(petCode), next(nullptr) {}
// };

// Node* createNode(int petCode) {
//     return new Node(petCode);
// }

// void printList(Node* head) {
//     if (head == nullptr) {
//         return;
//     }
    
//     Node* temp = head;
//     do {
//         cout << temp->petCode << " ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << endl;
// }

// Node* insertAtEnd(Node* head, int newPetCode) {
//     Node* newNode = createNode(newPetCode);
//     if (head == nullptr) {
//         newNode->next = newNode; // Point to itself
//         return newNode;
//     }
    
//     Node* tail = head;
//     while (tail->next != head) {
//         tail = tail->next; // Find the last node
//     }

//     tail->next = newNode; // Link the new node
//     newNode->next = head; // Make it circular
//     return head;
// }

// Node* removeByCode(Node* head, int petToRemove) {
//     if (head == nullptr) return nullptr;

//     Node* current = head;
//     Node* prev = nullptr;

//     // Check if the head needs to be removed
//     if (head->petCode == petToRemove) {
//         if (head->next == head) { // Only one node
//             delete head;
//             return nullptr; // List is now empty
//         }
        
//         // Find the last node
//         while (current->next != head) {
//             current = current->next;
//         }
        
//         current->next = head->next; // Link last node to second node
//         delete head;
//         return current->next; // New head
//     }

//     // Traverse the list to find the pet code to remove
//     prev = head;
//     current = head->next;
//     while (current != head) {
//         if (current->petCode == petToRemove) {
//             prev->next = current->next; // Bypass the node to remove
//             delete current;
//             return head;
//         }
//         prev = current;
//         current = current->next;
//     }

//     return head; // Return the original head if not found
// }

// int main() {
//     int N;
//     cin >> N;

//     Node* head = nullptr;

//     for (int i = 0; i < N; i++) {
//         int petCode;
//         cin >> petCode;
//         Node* newNode = createNode(petCode);
//         if (head == nullptr) {
//             head = newNode;
//             head->next = head; // Circular reference
//         } else {
//             Node* tail = head;
//             while (tail->next != head) {
//                 tail = tail->next; // Find the last node
//             }
//             tail->next = newNode;
//             newNode->next = head; // Make it circular
//         }
//     }

//     int newPetCode, petToRemove;
//     cin >> newPetCode;
//     cin >> petToRemove;

//     head = insertAtEnd(head, newPetCode);
//     printList(head);

//     head = removeByCode(head, petToRemove);
//     printList(head);

//     return 0;
// }




// Sarah keeps a two-way linked list of her favorite recipes, each represented by an integer code. She wants to traverse the list to review all recipes, insert a new recipe at the end, and remove a recipe based on its code. Write a program to assist Sarah with these tasks.

// Input format :
// The first line of input consists of an integer N, the number of recipes in the list.

// The second line contains N integers, each representing a recipe code.

// The third line contains an integer M, the code of the new recipe to be inserted at the end of the list.

// The fourth line contains an integer R, the code of the recipe to be removed from the list.

// Output format :
// The first line of output prints the list of recipe codes after inserting the new recipe at the end.

// The second line prints the list of recipe codes after removing the specified recipe code.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 10

// 100 ≤ recipe code ≤ 1000

// R is present in the list.

// Sample test cases :
// Input 1 :
// 5
// 101 202 303 404 505
// 606
// 303
// Output 1 :
// 101 202 303 404 505 606 
// 101 202 404 505 606 
// Input 2 :
// 5
// 101 102 103 104 105
// 106
// 101
// Output 2 :
// 101 102 103 104 105 106 
// 102 103 104 105 106 
// theme
// instruction
// Fill your code here
// C++ (17)



// #include <iostream>
// using namespace std;

// struct Node {
//     int recipeCode;
//     Node* prev;
//     Node* next;

//     Node(int code) : recipeCode(code), prev(nullptr), next(nullptr) {}
// };

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->recipeCode << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void insertAtEnd(Node** head, Node** tail, int newRecipeCode) {
//     Node* newNode = new Node(newRecipeCode);
//     if (*head == nullptr) {
//         *head = newNode;
//         *tail = newNode;
//     } else {
//         (*tail)->next = newNode;
//         newNode->prev = *tail;
//         *tail = newNode;
//     }
// }

// void removeByCode(Node** head, Node** tail, int recipeToRemove) {
//     Node* current = *head;
    
//     while (current != nullptr) {
//         if (current->recipeCode == recipeToRemove) {
//             // Node to remove is the head
//             if (current == *head) {
//                 *head = current->next;
//                 if (*head != nullptr) {
//                     (*head)->prev = nullptr;
//                 } else {
//                     *tail = nullptr; // List is now empty
//                 }
//             } else {
//                 // Node to remove is not the head
//                 if (current->prev != nullptr) {
//                     current->prev->next = current->next;
//                 }
//                 if (current->next != nullptr) {
//                     current->next->prev = current->prev;
//                 }
//             }
//             delete current;
//             return; // Exit after removing the node
//         }
//         current = current->next;
//     }
// }

// int main() {
//     int N;
//     cin >> N;

//     Node* head = nullptr;
//     Node* tail = nullptr;

//     for (int i = 0; i < N; i++) {
//         int recipeCode;
//         cin >> recipeCode;
//         insertAtEnd(&head, &tail, recipeCode);
//     }

//     int newRecipeCode, recipeToRemove;
//     cin >> newRecipeCode;
//     cin >> recipeToRemove;

//     insertAtEnd(&head, &tail, newRecipeCode);
//     printList(head);

//     removeByCode(&head, &tail, recipeToRemove);
//     printList(head);

//     // Cleanup: Free the allocated memory
//     Node* temp;
//     while (head != nullptr) {
//         temp = head;
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }
