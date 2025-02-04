#include <iostream>
using namespace std;
int main(){
    int i,arr[100],num,first,last,middle;
    cout<<"enter 10 element(in asc order): ";
    for(i=0;i<10;i++)
    cin>>arr[i];
    cout<<"\n eneter element to be search: ";
    cin>>num;
    first = 0;
    last = 9; 
    middle=(first+last)/2;
    while (first<=last)
    {
        if(arr[middle]<num)
        first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\n the number, "<<num<<"found at position"<<middle+1;
            break;
        }
        else
        last = middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    cout<<"\n the number, "<<num<<"is not found at in givin array";
    cout<<endl;
    
}