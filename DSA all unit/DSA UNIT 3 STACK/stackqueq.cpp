// // You are using GCC
// #include<iostream>
// using namespace std;
// struct queue {
//     int front, rear, capacity;
//     int* queue;
//     queue(int c){
//         front = rear=0;
//         capacity = c;
//         queue = new int [capacity];
//     }
//     ~queue(){/////destructor
//         delete[] queue;
//     }
//     void queueEnqueue(int data){
//         if(capacity == rear){
//             cout<<"\n queue is full\n";
//             return;
//         }
//         else{
//             queue[rear]=data;
//             rear++;
//         }
//     }
//     void queueDequeue(){
//         if(front == rear){
//             cout<<"\n queue is empty\n";
//             return;
//         }
//         else{
//             for(int i=0;i<rear -1;i++){///same like delette operation
//                 queue[i]=queue[i+1];
//             }
//             rear--;
//         }
//     }
//     void queuedisplay(){
//         if(front == rear){
//             cout<<"\n queue is empty\n";
//             return;
//         }
//         for(int i=front;i<rear;i++){
//             cout<<queue[i]<<"<-- ";
//         }
//         cout<<"\n";
        
//     }
//     void queuefront(){
//         if(front == rear){
//             cout<<"\n queue is empty\n";
//             return;
//         }
//         cout<<queue[front]<<"\n";
//     }

// };
// int main(){
//     queue q(5);
//     q.queueEnqueue(10);
//     q.queueEnqueue(20);
//     q.queueEnqueue(30);
//     q.queueEnqueue(40);
//     q.queueEnqueue(50);
//     q.queuedisplay();
//     q.queueDequeue();
//     q.queuedisplay();
//     q.queuefront();
//     cout<<"after two deletion\n";
//     q.queuedisplay();
//     q.queuefront();

// }

// ////linkedlist


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// struct Queue {
//     Node* front;
//     Node* rear;

//     Queue() {
//         front = rear = nullptr;
//     }

//     ~Queue() {
//         while (front) {
//             Node* temp = front;
//             front = front->next;
//             delete temp;
//         }
//     }

//     void enqueue(int data) {
//         Node* newNode = new Node{data, nullptr};
//         if (rear) {
//             rear->next = newNode;
//         } else {
//             front = newNode;
//         }
//         rear = newNode;
//     }

//     void dequeue() {
//         if (!front) {
//             cout << "\nQueue is empty\n";
//             return;
//         }
//         Node* temp = front;
//         front = front->next;
//         if (!front) {
//             rear = nullptr;
//         }
//         delete temp;
//     }

//     void display() {
//         if (!front) {
//             cout << "\nQueue is empty\n";
//             return;
//         }
//         Node* temp = front;
//         while (temp) {
//             cout << temp->data << "<-- ";
//             temp = temp->next;
//         }
//         cout << "\n";
//     }

//     void peek() {
//         if (!front) {
//             cout << "\nQueue is empty\n";
//             return;
//         }
//         cout << front->data << "\n";
//     }
// };

// int main() {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     q.display();
//     q.dequeue();
//     q.display();
//     q.peek();
//     cout << "After two deletions:\n";
//     q.dequeue();
//     q.display();
//     q.peek();
// }





