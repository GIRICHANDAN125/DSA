#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    for(int i=0;i<size-1;i--){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
///// insert at end
#include <iostream>

int main() {
    int arr[100]={1,3,4}; // Example array with a size of 100
    int n = 3; // Current number of elements in the array
    

    int newElement = 40; // Element to be inserted

    // Insert at the end
    arr[n] = newElement;
    n++; // Increase the size of the array

    // Print the elements
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
