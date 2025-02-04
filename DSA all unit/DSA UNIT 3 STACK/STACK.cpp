#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);////input or insert
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;/// size of stack
    cout<<s.top()<<endl;/// top is 30 in stack
    s.pop();
    cout<<s.top()<<endl;/// delete top of stack
    s.push(5);           //// add
    cout<<s.top()<<endl; //// top is 5
    while(s.empty()==false){
        cout<<s.top()<<endl;//// total stack
        s.pop();
    }

}