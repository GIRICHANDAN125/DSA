#include <iostream>
using namespace std;

void insertAtBeginning(int arr[], int &size, int value) {
    for (int i = size; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    ++size;
}

int main() {
    int size, value;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[100];  // Assuming a max array size of 100

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value to insert at the beginning: ";
    cin >> value;

    // Insert the new value at the beginning
    insertAtBeginning(arr, size, value);

    // Print the updated array
    cout << "Array after insertion at the beginning: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//// end = logic
// Insert the new value at the end of the array
// arr[size] = value;
//     // Increase the size of the array
//     ++size;



////at any postion
#include <iostream>
using namespace std;

// Function to insert an element at a specified position
void insertAtPosition(int arr[], int &size, int pos, int value) {
    for (int i = size; i >= pos; --i) {
        arr[i] = arr[i - 1];
    }
    // Insert the new value at the specified position
    arr[pos - 1] = value;
    // Increase the size of the array
    ++size;
}

int main() {
    int size, pos, value;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[100];  // Assuming a max array size of 100

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    cout << "Enter the position to insert the value (1-based index): ";
    cin >> pos;

    // Insert the new value at the specified position
    insertAtPosition(arr, size, pos, value);

    // Print the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
