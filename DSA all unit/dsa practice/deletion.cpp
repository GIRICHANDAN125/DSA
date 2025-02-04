// #include <iostream>
// using namespace std;

// void delbegin(int &size, int arr[]) {
//     for (int i = 0; i < size - 1; ++i) {
//         arr[i] = arr[i + 1];
//     }
//     --size;
// }

// int main() {
//     int size;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     delbegin(size, arr);
//     cout << "Array after deletion at beginning: ";
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
//// delete at any postion
#include <iostream>
using namespace std;


void deleteAtPosition(int arr[], int &size, int pos){ 
    for (int i = pos - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

int main() {
    int size, pos;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Initial array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the position to delete (1-based index): ";
    cin >> pos;

    deleteAtPosition(arr, size, pos);

    cout << "Array after deletion at position " << pos << ": ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

