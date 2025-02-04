#include <iostream>

int main() {
    int arr[10]={1,2,3,4,5};
    int n = 5;//// size
    int element = 9;
    for(int i=n;i>0;i--){ ///i-- insertion and i++ deletion 
        arr[i]=arr[i-1];{
            arr[i]=element;
            n++;
        }
        {
            for(int i=0;i<n;i++){
                std::cout<<arr[i];
            }
        }
        return 0;
    }
}
/// specific potion


#include <iostream>

int main() {
    int arr[10]={1,2,3,4,5};
    int n = 5;//// size
    int element = 9;
    int position = 2;
    for(int i=n;i>position;i--){
        arr[i]=arr[i-1];{
            arr[position]=element;
            n++;
        }
        {
            for(int i=0;i<n;i++){
                std::cout<<arr[i];
            }
        }
        return 0;
        
    }

    return 0;
}

