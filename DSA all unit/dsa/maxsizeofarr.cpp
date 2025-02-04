#include <iostream>
#define MAX_SIZE 100
using namespace std;
int main(){
    int arr[100];
    int i,num,size,position;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<"enter elements in array:";
    for(i=0;i<size;i++);
    {
        cin>>arr[i];
        cout<<" eneter  element to insert:";
        cin>>num;
        cout<<"enter element to insert:";
        if(position>size+1 ||position<= 0)
        {
            cout<<"invalid position !please eneter postion b/w 1 t0 " <<size;

        }
        else{
            for(i=size;i>=position;i--)
            {
                arr[i] = arr[i-1];
            }
            arr[position-1] = num;
            size++;
            
        }
    }
}