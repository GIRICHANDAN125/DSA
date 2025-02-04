#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,0,20,6,30};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" "<<endl;
        /* code */
    }
    
}
//////2prblm
#include<iostream>
using namespace std;
namespace n1{
    int x = 2;

}
namespace n2{
    int x = 5;

} 

int main(){
    cout<<n1::x<<endl<<" "<<n2::x<<endl;
    return 0;
}

/////3prblm'

///seraching array in the elements

#include<iostream>
using namespace std;

int main(){
    int arr[10],i,num,index;
    cout<<"Enter 10 elements in array: ";
    for(i=0;i<10;i++)
    cin>>arr[i];
    cout<<"endter the number: ";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(arr[i]==num){
            index = i;
            break;
        }

    cout<<"element found"<<index;
    cout<<endl;
    return 0;

    }
}