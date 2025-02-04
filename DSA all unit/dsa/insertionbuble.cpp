// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cin>>n;
//     int arr[n];
//     {
//         for(i=0;i<n;i++)
//             cin>>arr[i];
//     }
//     for(int i=1;i<n;i++)
//     {
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j]>current && j>=0)///// logic
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }

//     }
//     return 0;
// }



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    for(int i=0;i<n;i--){
        if(arr[i]=arr[i-1]){
            arr[0]=val;
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    

    return 0;
}