// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
    
//     bubbleSort(arr, n);
    
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; ++i) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             --j;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
    
//     int* arr = new int[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
    
//     insertionSort(arr, n);
    
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     delete[] arr;
//     return 0;
// }

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
