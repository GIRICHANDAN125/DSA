// Problem Statement



// Alice is preparing for a coding competition and wants to practice her skills with linked lists. She decides to write a program that allows her to create a linked list by inserting elements at the front. 



// Help Alice with her task.



// Company tags: HCL

// Input format :
// The first line of input consists of an integer n, representing the number of elements to be inserted.

// The second line of input consists of n space-separated integers, representing the elements to be inserted in the linked list.

// The third line of input consists of an integer m, representing the value to be inserted at the front of the linked list.

// Output format :
// The first line of output displays "Created Linked list: " followed by the elements of the linked list.

// The second line of output displays "Final List: " followed by the elements of the linked list after inserting the new element at the front.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ elements, m ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 6 5 4 3 2
// 1
// Output 1 :
// Created Linked list: 2 3 4 5 6 
// Final List: 1 2 3 4 5 6 
// Input 2 :
// 4
// -10 20 -30 40
// 5
// Output 2 :
// Created Linked list: 40 -30 20 -10 
// Final List: 5 40 -30 20 -10 
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// void insertAtFront(Node*& head, int newData) {
//     Node* newNode = new Node(newData);
//     newNode->next = head;
//     head = newNode;
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main() {
//     int n, m;
//     cin >> n;

//     Node* head = nullptr;

//     for (int i = 0; i < n; ++i) {
//         int element;
//         cin >> element;
//         insertAtFront(head, element);
//     }

//     cout << "Created Linked list: ";
//     printList(head);
//     cout << endl;

//     cin >> m;

//     insertAtFront(head, m);

//     cout << "Final List: ";
//     printList(head);
//     cout << endl;

//     return 0;
// }




// 2



// Single File Programming Question
// Problem Statement



// Sharon is developing a character editor for a simple text-based game. The editor allows users to maintain a singly linked list of characters representing a sequence of moves in the game. 



// Initially, users input a series of characters to create their move sequence. Later, they can insert a new character at a specific position within the sequence to alter their gameplay strategy, ensuring the list is updated and displayed correctly. Assist Sharon in the task.



// Company tags: TCS

// Input format :
// The first line contains an integer n, the number of initial characters.

// The second line consists of n characters, representing the initial move sequence.

// The last line contains a character and an integer pos, representing the new move to be added and its position(1-based) in the sequence.

// Output format :
// The first line displays "Current Linked List:" followed by the initial sequence of moves in the next line.

// The third line displays "Updated Linked List:" followed by the updated sequence of moves after inserting the new move at the specified position in the next line.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// Sample test cases :
// Input 1 :
// 6
// A B C D E F
// G 7
// Output 1 :
// Current Linked List:
// A B C D E F 
// Updated Linked List:
// A B C D E F G 
// Input 2 :
// 3
// A O B
// M 1
// Output 2 :
// Current Linked List:
// A O B 
// Updated Linked List:
// M A O B 
// theme
// instruction
// Fill


// // You are using GCC
// #include <iostream>
// using namespace std;

// struct Node {
//     char data;
//     Node* next;
//     Node(char val) : data(val), next(nullptr) {}
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() : head(nullptr) {}

//     void append(char value) {
//         Node* newNode = new Node(value);
//         if (head == nullptr) {
//             head = newNode;
//         } else {
//             Node* temp = head;
//             while (temp->next != nullptr) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//     }

//     void insertAtPosition(char value, int pos) {
//         Node* newNode = new Node(value);
//         if (pos == 1) {
//             newNode->next = head;
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         for (int i = 1; i < pos - 1 && temp != nullptr; ++i) {
//             temp = temp->next;
//         }
//         if (temp == nullptr) {
//             return;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     void printList() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedList list;
//     int n;
//     cin >> n;

//     char ch;
//     for (int i = 0; i < n; ++i) {
//         cin >> ch;
//         list.append(ch);
//     }

//     cout << "Current Linked List:" << endl;
//     list.printList();

//     char newChar;
//     int pos;
//     cin >> newChar >> pos;

//     list.insertAtPosition(newChar, pos);

//     cout << "Updated Linked List:" << endl;
//     list.printList();

//     return 0;
// }






// 3



// Single File Programming Question
// Problem Statement



// Vijay is creating a linked list and wants to perform different operations on it. She can append values either to the left (beginning) or right (end) of the linked list. She also wants to print the linked list at any point in time. 



// He wants to be able to perform the following operations:

// 1: Append Left: Append a node at the beginning(left) of the linked list.

// 2: Append Right: Append a node at the end(right) of the linked list.

// 3: Print: Print the contents of the linked list.

// 4: Exit: Exit the program.



// Company tags: Accenture

// Input format :
// The input consists of multiple lines. Each line starts with an integer choice representing the operation (1 to append left, 2 to append right, 3 to print, and 4 to exit).

// If the choice is 1 or 2, it is followed by an integer n representing the value to be appended to the linked list separated by a space.

// The input continues until the choice is 4.

// Output format :
// When the choice is 3, the output displays "Linked List: " followed by the values in the linked list separated by a space.

// If the choice is invalid the output displays "Invalid choice".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 100

// Sample test cases :
// Input 1 :
// 1 10
// 2 20
// 3
// 4
// Output 1 :
// Linked List: 10 20
// Input 2 :
// 1 10
// 1 20
// 1 30
// 2 35
// 3 
// 4
// Output 2 :
// Linked List: 30 20 10 35
// Input 3 :
// 5
// 4
// Output 3 :
// Invalid choice

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int val) : data(val), next(nullptr) {}
// };

// class LinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() : head(nullptr), tail(nullptr) {}

//     void appendLeft(int value) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         head = newNode;
//         if (tail == nullptr) {
//             tail = head;
//         }
//     }

//     void appendRight(int value) {
//         Node* newNode = new Node(value);
//         if (tail == nullptr) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void printList() {
//         Node* temp = head;
//         cout << "Linked List: ";
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinkedList list;
//     int choice, value;

//     while (cin >> choice) {
//         switch (choice) {
//             case 1:
//                 cin >> value;
//                 list.appendLeft(value);
//                 break;
//             case 2:
//                 cin >> value;
//                 list.appendRight(value);
//                 break;
//             case 3:
//                 list.printList();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 cout << "Invalid choice" << endl;
//         }
//     }

//     return 0;
// }





// lecuture 2



// roblem Statement



// A software engineer is developing a function for a new feature in an editor application that rearranges numerical data. To test this, they need to create a singly linked list where each node contains an integer. 



// The task is to swap every two adjacent nodes in the linked list and print the list before and after swapping.



// Company Tags: Amazon, Microsoft, Moonfrog Labs

// Input format :
// The first line of input consists of an integer n, representing the number of nodes in the linked list.

// The second line consists of n integers, representing the data values for each node in the linked list.

// Output format :
// The first line of output prints the linked list before swapping.

// The second line prints the linked list after swapping.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 30

// 0 ≤ data values ≤ 100

// Sample test cases :
// Input 1 :
// 6
// 3 1 5 4 2 8
// Output 1 :
// Before swapping: 3 1 5 4 2 8 
// After swapping: 1 3 4 5 8 2 
// Input 2 :
// 5
// 1 2 3 4 5
// Output 2 :
// Before swapping: 1 2 3 4 5 
// // You are using GCC
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void insertAtEnd(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = nullptr;
//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void swapAdjacent(Node*& head) {
//     Node* temp = head;
//     while (temp != nullptr && temp->next != nullptr) {
//         swap(temp->data, temp->next->data);
//         temp = temp->next->next;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
    
//     Node* head = nullptr;
//     for (int i = 0; i < n; i++) {
//         int value;
//         cin >> value;
//         insertAtEnd(head, value);
//     }
    
//     cout << "Before swapping: ";
//     printList(head);
    
//     swapAdjacent(head);
    
//     cout << "After swapping: ";
//     printList(head);
    
//     return 0;
// }




// oblem Statement



// In a warehouse management system, packages are organized sequentially using a singly linked list, where each node represents a package with its unique ID. To optimize the retrieval process, the system allows reversing the order of packages in groups of k nodes. 



// Your task is to read the package IDs, construct the linked list, and reverse the order of packages in groups of k.

// Input format :
// The first line of input consists of an integer n, the number of packages.

// The second line consists of n integers, the package IDs.

// The third line consists of an integer k, the size of the groups to reverse.

// Output format :
// The first line of output prints the original sequence of package IDs as a linked list.

// The second line prints the modified sequence of package IDs after reversing in groups of k.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 20

// 1 ≤ package ID, k ≤ 100

// Sample test cases :
// Input 1 :
// 8
// 1 2 3 4 5 6 7 8
// 4
// Output 1 :
// Original Linked List: 1 2 3 4 5 6 7 8 
// Modified Linked List: 4 3 2 1 8 7 6 5 
// Input 2 :
// 5
// 1 2 3 4 5
// 3
// Output 2 :
// Original Linked List: 1 2 3 4 5 
// Modified Linked List: 3 2 1 5 4 
// theme
// instruction
// Fill your code here
// C++ (17)


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void insertAtEnd(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = nullptr;
//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// Node* reverseInGroups(Node* head, int k) {
//     Node* prev = nullptr;
//     Node* curr = head;
//     Node* next = nullptr;
//     int count = 0;
    
//     while (curr != nullptr && count < k) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }
    
//     if (next != nullptr) {
//         head->next = reverseInGroups(next, k);
//     }
    
//     return prev;
// }

// int main() {
//     int n, k;
//     cin >> n;
    
//     Node* head = nullptr;
//     for (int i = 0; i < n; i++) {
//         int value;
//         cin >> value;
//         insertAtEnd(head, value);
//     }
    
//     cin >> k;
    
//     cout << "Original Linked List: ";
//     printList(head);
    
//     head = reverseInGroups(head, k);
    
//     cout << "Modified Linked List: ";
//     printList(head);
    
//     return 0;
// }

// Problem Statement



// Imagine you are given an integer n representing the number of nodes in a singly linked list. 



// Your task is to implement a program that creates a singly linked list with the given number of nodes and string values and then deletes the last node from the list. Finally, you need to print the contents of the modified linked list.

// Input format :
// The first line of input consists of an integer n, representing the number of nodes in the singly linked list.

// The next n lines of input consist of n strings, where each line represents the string value of a node in the linked list.

// Output format :
// The output should print the elements of the singly linked list after deleting the last node. The elements should be separated by space.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// Sample test cases :
// Input 1 :
// 4
// Hello 
// World 
// I 
// Am
// Output 1 :
// Hello World I 
// Input 2 :
// 3
// Hello 
// Hello 
// Hello
// Output 2 :
// Hello 


// #include <iostream>
// #include <string>
// using namespace std;

// struct Node {
//     string data;
//     Node* next;
// };

// Node* createList(int n) {
//     Node *head = nullptr, *temp = nullptr;
//     for (int i = 0; i < n; ++i) {
//         string value;
//         getline(cin, value);
//         Node* newNode = new Node{value, nullptr};
//         if (!head) {
//             head = newNode;
//         } else {
//             temp->next = newNode;
//         }
//         temp = newNode;
//     }
//     return head;
// }

// void deleteLastNode(Node*& head) {
//     if (!head || !head->next) {
//         delete head;
//         head = nullptr;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next->next) {
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = nullptr;
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp) {
//         cout << temp->data;
//         if (temp->next) cout << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore();  // To ignore the newline after the integer input
//     Node* head = createList(n);
//     deleteLastNode(head);
//     printList(head);
//     return 0;
// }





// ingle File Programming Question
// Problem Statement



// Dharun is working on a program to manipulate linked lists. He wants to write a function that takes two linked lists as input, inserts nodes at the end, and deletes all the nodes from the first list that also appear in the second list. 



// Dharun needs your help implementing this function. The function should take two linked lists, list1, and list2, as input, where each list is represented by its head node.

// Input format :
// The first line contains an integer n, denoting the number of nodes in list1.

// The second line contains n space-separated integers, representing the values of the nodes in list1.

// The third line contains an integer m, denoting the number of nodes in list2.

// The fourth line contains m space-separated integers, representing the values of the nodes in list2.

// Output format :
// The first line of output displays "Before deletion: " followed by the elements of the first linked list before the deletion, separated by a space.

// The second line of output displays "After deletion: " followed by the elements of the first linked list after the deletion, separated by a space.

// If all elements in the first linked list are the same after deletion, the third line displays, "Elements in both lists are same".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n,m ≤ 100

// -5000 ≤ values of nodes ≤ 5000

// Sample test cases :
// Input 1 :
// 5
// 2 3 4 5 1
// 5
// 1 6 2 3 8
// Output 1 :
// Before deletion: 2 3 4 5 1 
// After deletion: 4 5 
// Input 2 :
// 5
// 1 2 3 4 5
// 5
// 1 2 3 4 5
// Output 2 :
// Before deletion: 1 2 3 4 5 
// After deletion: 
// Elements in both lists are same
// theme
// instruction
// Fill your code here
// C++ (17)
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void insertNode(Node** head, int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = nullptr;

//     if (*head == nullptr) {
//         *head = newNode;
//     } else {
//         Node* temp = *head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// bool valueExists(Node* second, int value) {
//     //Type your code here
//     Node* temp = second;
//     while (temp != nullptr) {
//         if (temp->data == value) {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
    
// }

// void deleteNodesInSecondList(Node** first, Node* second) {
//     //Type your code here
//     Node *current = *first, *prev = nullptr;

//     while (current != nullptr) {
//         if (valueExists(second, current->data)) {
//             if (prev == nullptr) {
//                 // Deleting head node
//                 *first = current->next;
//                 delete current;
//                 current = *first;
//             } else {
//                 // Deleting a middle or last node
//                 prev->next = current->next;
//                 delete current;
//                 current = prev->next;
//             }
//         } else {
//             prev = current;
//             current = current->next;
//         }
//     }
    
// }

// void displayLinkedList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void deleteLinkedList(Node* head) {
//     Node* temp;
//     while (head != nullptr) {
//         temp = head;
//         head = head->next;
//         delete temp;
//     }
// }

// bool areAllElementsSame(Node* head) {
//     if (head == nullptr) return true;

//     int firstValue = head->data;
//     Node* temp = head->next;

//     while (temp != nullptr) {
//         if (temp->data != firstValue) {
//             return false;
//         }
//         temp = temp->next;
//     }

//     return true;


    
// }

// int main() {
//     Node* first = nullptr;
//     Node* second = nullptr;
//     int size1, size2;

//     cin >> size1;

//     for (int i = 0; i < size1; i++) {
//         int value;
//         cin >> value;
//         insertNode(&first, value);
//     }

//     cin >> size2;

//     for (int i = 0; i < size2; i++) {
//         int value;
//         cin >> value;
//         insertNode(&second, value);
//     }

//     cout << "before deletion: ";
//     displayLinkedList(first);

//     deleteNodesInSecondList(&first, second);

//     cout << "after deletion: ";
//     displayLinkedList(first);

//     if (areAllElementsSame(first)) {
//         cout << "Elements in both lists are same";
//     }

//     deleteLinkedList(first);
//     deleteLinkedList(second);

//     return 0;
// }




// roblem Statement



// Madhan is developing a contact management system for a mobile application. The system allows users to maintain a list of their contacts. Whenever a user adds a new contact, the system should add it at the end of the contact list.



// Write a program for Madhan to implement the code to perform insertion at the end using a grounded header linked list.



// Company Tags: TCS

// Input format :
// The first line of input consists of the size n of the contact list.

// The second line consists of n contact elements.

// Output format :
// The output represents the contact list with the contacts added at the end.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// 1 ≤ contact elements ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// Output 1 :
// 1 2 3 4 5 
// Input 2 :
// 8
// 13 45 67 82 29 35 72 91
// Output 2 :
// 13 45 67 82 29 35 72 91 
// theme
// instruction
// Fill your code here
// C++ (17)


// #include <iostream>

// struct link {
//     int info;
//     struct link* next;
// };

// struct link* start = NULL;

// struct link* create_header_list(int data)
// {
//     struct link* newNode = new link();
//     newNode->info = data;
//     newNode->next = NULL;

//     if (start == NULL) {
//         start = newNode;
//     } else {
//         struct link* temp = start;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
//     return start;
// }

// struct link* display()
// {
//     struct link* node;
//     node = start;

//     while (node != NULL) {
//         std::cout << node->info << " ";
//         node = node->next;
//     }
//     std::cout << std::endl;

//     return start;
// }

// int main()
// {
//     int numElements;
//     std::cin >> numElements;
//     for (int i = 0; i < numElements; i++) {
//         int value;
//         std::cin >> value;
//         create_header_list(value);
//     }
//     display();

//     return 0;
// }



// oblem Statement



// Suppose you are working on a student management system for a university, and you need to implement a deletion functionality for a grounded header linked list to manage student records. Write a program to implement deletion logic with multiple deletions based on user input.



// Company Tags: TCS

// Input format :
// The first line of input consists of the elements to be inserted in the list.

// The second line consists of the elements to be deleted.

// Terminate the inputs when -1 is given.

// Output format :
// The output prints the remaining elements in the reverse order, after deleting the given element.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ list elements ≤ 100

// Sample test cases :
// Input 1 :
// 1 2 3 4 5 -1
// 2 -1
// Output 1 :
// 5 4 3 1 
// Input 2 :
// 1 2 3 4 5 -1
// 2 3 4 -1
// Output 2 :
// 5 1 



// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };

// void deleteNode(Node* head, int value) {
//     Node* current = head;
//     while (current->next != nullptr) {
//         if (current->next->data == value) {
//             Node* toDelete = current->next;
//             current->next = toDelete->next;
//             delete toDelete;
//             return;
//         }
//         current = current->next;
//     }
// }

// int main() {
//     Node* head = new Node();
//     head->next = nullptr;

//     int value;
//     while (std::cin >> value && value != -1) {
//         Node* newNode = new Node();
//         newNode->data = value;

//         newNode->next = head->next;
//         head->next = newNode;
//     }
//     while (std::cin >> value && value != -1) {
//         deleteNode(head, value);
//     }

//     Node* current = head->next;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }

//     return 0;
// }




// blem Statement



// Sharon is managing a list of items in her online store. She needs to track and display the number of items added to her inventory each day. To do this, she decides to use a grounded header linked list structure where each node represents an item added to the inventory.



// Guide Sharon in completing the program.

// Input format :
// The input consists of a sequence of integer values representing item quantities, followed by -1 which signals the end of input.

// Output format :
// The output prints an integer representing the number of items in the inventory.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ item quantity ≤ 100

// Sample test cases :
// Input 1 :
// 1 2 3 4 5 -1
// Output 1 :
// 5
// Input 2 :
// 12 34 78 92 46 78 -1
// Output 2 :
// 6


// #include <iostream>

// struct Node {
//     int quantity;
//     Node* next;
// };

// Node* head = nullptr;

// void addItem(int quantity) {
//     Node* newNode = new Node();
//     newNode->quantity = quantity;
//     newNode->next = head;
//     head = newNode;
// }

// int countItems() {
//     Node* current = head;
//     int count = 0;
    
//     while (current != nullptr) {
//         count++;
//         current = current->next;
//     }
    
//     return count;
// }

// int main() {
//     int quantity;
    
//     while (std::cin >> quantity && quantity != -1) {
//         if (quantity >= 1 && quantity <= 100) { // Ensure item quantity is within valid range
//             addItem(quantity);
//         }
//     }
    
//     std::cout << countItems() << std::endl;
    
//     // Free memory
//     Node* current = head;
//     while (current != nullptr) {
//         Node* toDelete = current;
//         current = current->next;
//         delete toDelete;
//     }

//     return 0;
// }




// lem Statement



// You are given the task of developing a program that operates on a circular header linked list, a variant of the standard linked list. In this circular header linked list, the last node points back to the header node, forming a circular structure.



// Your goal is to implement a program that inserts elements at the end of the circular linked list and prints the data values of alternate nodes.



// Company Tags: TCS

// Input format :
// The first line contains an integer n, representing the number of elements in the circular linked list.

// The second line contains n space-separated integers, representing the elements to be inserted into the linked list.

// Output format :
// The output displays "Alternate Nodes: " followed by the data of every alternate node in the circular linked list.

// If no elements are inserted, print "Linked List is empty".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 1 ≤ elements ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// Output 1 :
// Alternate Nodes: 1 3 5 
// Input 2 :
// 0
// Output 2 :
// Linked List is empty



// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };

// Node* createNode(int newData) {
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = nullptr;
//     return newNode;
// }

// void insert(Node*& header, int newData) {
//     Node* newNode = createNode(newData);
//     if (header->next == nullptr) {
//         header->next = newNode;
//         newNode->next = header;  // Point to header to form circular link
//     } else {
//         Node* temp = header->next;
//         while (temp->next != header) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = header;
//     }
// }

// void printAlternateNodes(const Node* header) {
//     if (header->next == nullptr) {
//         std::cout << "Linked List is empty" << std::endl;
//         return;
//     }

//     const Node* current = header->next;
//     bool print = true;

//     std::cout << "Alternate Nodes: ";
//     do {
//         if (print) {
//             std::cout << current->data << " ";
//         }
//         print = !print;
//         current = current->next;
//     } while (current != header);
//     std::cout << std::endl;
// }

// void deleteList(Node*& header) {
//     if (header == nullptr || header->next == header) {
//         delete header;
//         header = nullptr;
//         return;
//     }

//     Node* current = header->next;
//     Node* nextNode;

//     while (current != header) {
//         nextNode = current->next;
//         delete current;
//         current = nextNode;
//     }

//     delete header;
//     header = nullptr;
// }

// int main() {
//     Node* header = new Node();
//     header->next = nullptr;

//     int n;
//     std::cin >> n;

//     if (n == 0) {
//         std::cout << "Linked List is empty" << std::endl;
//         delete header;
//         return 0;
//     }

//     for (int i = 0; i < n; i++) {
//         int newData;
//         std::cin >> newData;
//         insert(header, newData);
//     }

//     printAlternateNodes(header);
//     deleteList(header);

//     return 0;
// }




// roblem Statement



// Sam is working with a messaging system where messages are stored in a circular queue. In this system, each new message is inserted at the beginning of the queue, forming a circular linked list. 



// Sam wants to reverse the order of the messages in the queue. Your task is to implement a program that takes the number of messages and their content as input, inserts them into the queue, reverses the order of the messages, and then displays the reversed messages.



// Company Tags: Capgemini

// Input format :
// The first line of input contains an integer n, representing the number of messages in the queue.

// The next n lines contain strings representing the content of each message.

// Output format :
// The output displays "Message Queue: " followed by each message content in the reversed order, each prefixed by "- ".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// The string contains uppercase, lowercase, space, and special characters with at most 50 characters.

// Sample test cases :
// Input 1 :
// 4
// Hello, how are you?
// Can we meet tomorrow?
// Don't forget to bring the documents.
// See you soon!
// Output 1 :
// Message Queue: 
// - See you soon!
// - Don't forget to bring the documents.
// - Can we meet tomorrow?
// - Hello, how are you?

// Input 2 :
// 2
// Hello, Hi
// Let's code
// Output 2 :
// Message Queue: 
// - Let's code
// - Hello, Hi

// Input 3 :
// 0
// Output 3 :
// Message queue is empty!




// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore();  // To ignore the newline character after the integer input

//     if (n == 0) {
//         cout << "Message queue is empty!" << endl;
//         return 0;
//     }

//     string* messages = new string[n];

//     // Reading messages into the array
//     for (int i = 0; i < n; ++i) {
//         getline(cin, messages[i]);
//     }

//     // Printing messages in reversed order
//     cout << "Message Queue:" << endl;
//     for (int i = n - 1; i >= 0; --i) {
//         cout << "- " << messages[i] << endl;
//     }

//     delete[] messages;  // Free allocated memory
//     return 0;
// }



// Lisa is organizing a list of attendees for two consecutive events. She wants to split a list of attendee names into two halves for the two events. You are tasked with helping Lisa by creating a program that handles this task efficiently.



// Write a program to manage a two-way linked list of attendee names to split it into two halves. 



// Company Tags: Microsoft

// Input format :
// The first line of input consists of a single integer N, representing the number of attendees.

// The following N lines contain the names of the attendees, one name per line.

// Output format :
// The first line of output displays the names of the attendees assigned to the first event.

// The second line displays the names of the attendees assigned to the second event.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ N ≤ 20

// Sample test cases :
// Input 1 :
// 4
// John
// Emma
// Michael
// Sophia
// Output 1 :
// John Emma 
// Michael Sophia 
// Input 2 :
// 5
// Alice
// Bob
// Claire
// David
// Emily
// Output 2 :
// Alice Bob Claire 
// David Emily 
// Fill your code here
// C++ (17)
// theme
// instruction

// #include <iostream>
// #include <string>

// struct Node {
//     std::string data;
//     Node* prev;
//     Node* next;
// };

// // Function to insert a node at the end of a doubly linked list
// void insertAtEnd(Node** head, const std::string& newData) {
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = nullptr;

//     if (*head == nullptr) {
//         newNode->prev = nullptr;
//         *head = newNode;
//         return;
//     }

//     Node* lastNode = *head;
//     while (lastNode->next != nullptr) {
//         lastNode = lastNode->next;
//     }

//     lastNode->next = newNode;
//     newNode->prev = lastNode;
// }

// // Function to display a doubly linked list
// void displayLinkedList(Node* head) {
//     Node* currentNode = head;

//     while (currentNode != nullptr) {
//         std::cout << currentNode->data << " ";
//         currentNode = currentNode->next;
//     }

//     std::cout << std::endl;
// }

// // Function to split a doubly linked list into two halves
// void splitDoublyLinkedList(Node* head, Node** firstHalf, Node** secondHalf) {
//     if (head == nullptr) {
//         *firstHalf = nullptr;
//         *secondHalf = nullptr;
//         return;
//     }

//     Node* slow = head;
//     Node* fast = head;
    
//     // Move fast pointer two steps and slow pointer one step
//     while (fast->next != nullptr && fast->next->next != nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Slow is now at the end of the first half
//     *firstHalf = head;
//     *secondHalf = slow->next;
//     slow->next->prev = nullptr; // End of the first half
//     slow->next = nullptr; // End of the first half

//     // Handle the case where the list has only one node
//     if (*secondHalf == nullptr) {
//         *secondHalf = nullptr;
//     }
// }

// int main() {
//     Node* head = nullptr;
//     Node* firstHalf = nullptr;
//     Node* secondHalf = nullptr;

//     int n;
//     std::string name;

//     std::cin >> n;
//     std::cin.ignore(); // Ignore the newline character

//     for (int i = 0; i < n; i++) {
//         std::getline(std::cin, name);
//         insertAtEnd(&head, name);
//     }

//     splitDoublyLinkedList(head, &firstHalf, &secondHalf);

//     displayLinkedList(firstHalf);
//     displayLinkedList(secondHalf);

//     return 0;
// }




// Single File Programming Question
// Problem Statement



// Tom manages a library system where books are categorized by their ID numbers in ascending order. He wants to maintain the order of books using a two-way linked list. Each time a new book is added, it should be placed in the correct position to keep the list sorted. Tom also wants to insert a final book after all the initial books have been added. 



// Write a program to help Tom maintain the sorted order of books in the library.



// Company Tags: Capgemini

// Input format :
// The first line of input contains an integer n representing the number of initial books.

// The second line consists of n integers representing the ID of each book to be added.

// The third line contains an integer representing the ID of the final book to be added.

// Output format :
// The output prints the sorted order of book IDs after all books have been added.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 25

// 1 ≤ book IDs ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 2 4 1
// 3
// Output 1 :
// 1 2 3 4 
// Input 2 :
// 1
// 5
// 2
// Output 2 :
// 2 5 
// theme
// instruction
// Fill your code here
// C++ (17)



// #include <iostream>
// using namespace std;

// // Node of a doubly linked list
// struct Node {
//     int data;
//     struct Node* prev, *next;
// };

// struct Node* getNode(int data) {
//     // allocate node
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

//     // put in the data
//     newNode->data = data;
//     newNode->prev = newNode->next = NULL;
//     return newNode;
// }

// void sortedInsert(struct Node** head_ref, struct Node* newNode) {
//     // Case 1: Empty list
//     if (*head_ref == NULL) {
//         *head_ref = newNode;
//         return;
//     }

//     // Case 2: Insert before the head
//     if (newNode->data <= (*head_ref)->data) {
//         newNode->next = *head_ref;
//         (*head_ref)->prev = newNode;
//         *head_ref = newNode;
//         return;
//     }

//     // Case 3: Insert somewhere after the head
//     struct Node* current = *head_ref;
//     while (current->next != NULL && current->next->data < newNode->data) {
//         current = current->next;
//     }

//     // Insert newNode after current
//     newNode->next = current->next;
//     if (current->next != NULL) {
//         current->next->prev = newNode;
//     }
//     current->next = newNode;
//     newNode->prev = current;
// }

// // Function to print the doubly linked list
// void printList(struct Node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl; // Added to end the line after printing the list
// }

// int main() {
//     // Start with the empty doubly linked list
//     struct Node* head = NULL;

//     // Input the number of nodes in the list
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int data;
//         cin >> data;

//         struct Node* new_node = getNode(data);
//         sortedInsert(&head, new_node);
//     }

//     // Insert the last element separately
//     int lastData;
//     cin >> lastData;
//     struct Node* lastNode = getNode(lastData);
//     sortedInsert(&head, lastNode);

//     printList(head);

//     return 0;
// }



// Problem Statement



// Jenna is organizing her bookshelf and wants to track the order of books she places on the shelf. She decides to use a two-way linked list for this purpose. Jenna can insert a book at the beginning of the shelf. Once all books are placed, she wants to reverse the order of the books on the shelf. 



// Write a program to help Jenna manage her bookshelf.

// Input format :
// The first line of input contains an integer n, representing the number of books Jenna places on the shelf.

// The second line contains n space-separated integers, representing the book IDs.

// Output format :
// The first line of output prints the original list.

// The second line prints the reversed list.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 25

// 1 ≤ books ID ≤ 100

// Sample test cases :
// Input 1 :
// 3
// 12 34 65
// Output 1 :
// Original List: 65 34 12 
// Reversed List: 12 34 65 
// Input 2 :
// 6
// 12 34 56 78 31 45
// Output 2 :
// Original List: 45 31 78 56 34 12 
// Reversed List: 12 34 56 78 31 45 
// theme
// instruction
// Fill your code here
// C++ (17)
// #include <iostream>

// struct Node {
//     int data;
//     Node* prev;
//     Node* next;
// };

// void insertAtBeginning(Node** head, int newData) {
//     Node* newNode = new Node;
//     newNode->data = newData;
//     newNode->prev = nullptr;
//     newNode->next = *head;

//     if (*head != nullptr)
//         (*head)->prev = newNode;

//     *head = newNode;
// }

// void reverseList(Node** head) {
//     if (*head == nullptr) return;

//     Node* current = *head;
//     Node* prev = nullptr;
//     Node* next = nullptr;

//     // Traverse the list and reverse the links
//     while (current != nullptr) {
//         next = current->next;
//         current->next = prev;
//         current->prev = next;
//         prev = current;
//         current = next;
//     }

//     *head = prev; // Update the head to the new first element
// }

// void printList(Node* head) {
//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }
//     std::cout << std::endl;
// }

// int main() {
//     Node* head = nullptr;
//     int n, data;

//     std::cin >> n;

//     // Create the doubly linked list
//     for (int i = 0; i < n; i++) {
//         std::cin >> data;
//         insertAtBeginning(&head, data);
//     }

//     std::cout << "Original List: ";
//     printList(head);

//     // Reverse the list
//     reverseList(&head);

//     std::cout << "Reversed List: ";
//     printList(head);

//     return 0;
// }
