#include<iostream>
using namespace std;
#define MAX_SIZE 100
void traverseInventory(int inventory[],int size){
    cout << "inventory list : ";
    for(int i=0;i<size;i++){ ////////////////////////////////////////////////
        cout << inventory[i] << " ";
    }
    cout << endl;
}

void insertitem(int inventory[],int &size,int item){
    if(size <MAX_SIZE){
        cout <<"insert item: "<< item << endl;////////////////////////////

        inventory[size] = item;
        size++;
        traverseInventory(inventory, size);
    }

}
void removeitem(int inventory[],int &size,int item){

    cout <<"remove item: "<< item << endl;
    for(int i = 0; i < size;i++){/////////////////////////////////////////////////
        if(inventory[i] == item){
        for(int j = i; j < size-1;j++){
            inventory[j] = inventory[j+1];

        }
        size--;
        break;
    }
}
traverseInventory(inventory,size);
}
int main(){
    
    int size ;
    cin >> size;
    int inventory[size];
    for(int i=0; i<size; i++){
        cin >> inventory[i];
    }

    traverseInventory(inventory, size);
    insertitem(inventory, size);
    removeitem(inventory, size);
    return 0;
}