#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this -> next = nullptr;
    }
};

void deleteposition(Node*& head, int pos){
    if(head == nullptr || pos<1){
        cout<<"invalid pos or list is empty"<<endl;
        return ;
        
    }
    if(pos ==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current =head;    
    for(int i=1; i<pos-1 && current != nullptr;i++){
        current = current->next;
    }
    if(current == nullptr || current->next == nullptr){
        cout<<"post exceeds list length"<<endl;
        return;
        }
        Node * temp = current->next;
        current->next = temp->next;
        delete temp;
}
int main(){
    Node *head = new Node(3);
    head -> next = new Node(12);
    head ->next->next=new Node(15);
    head ->next->next->next = new Node(18);
    cout<<"orginal list:  ";
    Node *temp=head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;
    deleteposition(head,2);
    cout<<"list after deleting: ";
    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp =temp->next;
        
    }
    cout<<"NULL"<<endl;
    return 0;
}
