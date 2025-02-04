// Single File Programming Question
// Problem Statement



// You're managing the inventory levels of different items in a warehouse. The inventory levels are stored in an array of integers, where each integer represents the quantity of a specific item. 



// You will perform the following operations:

// 1.	Traversal: Go through the list of inventory quantities to verify the stock levels.

// 2.	Insertion: Add a new item to the inventory, updating the quantity.

// 3.	Deletion: Remove an item from the inventory when it is out of stock.

// Input format :
// The first line of input contains an integer x, representing the number of items in the inventory.

// The second line contains x space-separated integers, each representing the quantity of an item in the inventory.

// The third line contains an integer n, representing the number of items to be newly added.

// The fourth line contains n space-separated integers, each representing the quantity of a new item to be added to the inventory.

// The fifth line contains an integer m, representing the number of items to be removed.

// The sixth line contains m space-separated integers, each representing the quantity of an item to be removed from the inventory.

// Output format :
// The first line of output prints "Inventory List: " followed by the quantities of the items in the inventory, separated by spaces.

// After each insertion:

// Print "Inserting Item: " followed by the quantity of the new item being added.
// Print "Inventory List: " followed by the updated inventory quantities, separated by spaces.
// After each deletion:

// Print "Removing Item: " followed by the quantity of the item being removed.
// Print "Inventory List: " followed by the updated inventory quantities, separated by spaces.


// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ x ≤ 10

// 1 ≤ n, m ≤ 5

// Sample test cases :
// Input 1 :
// 3
// 50 120 30
// 2
// 75 200
// 2
// 120 50
// Output 1 :
// Inventory List: 50 120 30 
// Inserting Item: 75
// Inventory List: 50 120 30 75 
// Inserting Item: 200
// Inventory List: 50 120 30 75 200 
// Removing Item: 120
// Inventory List: 50 30 75 200 
// Removing Item: 50
// Inventory List: 30 75 200 
// Input 2 :
// 4
// 12 78 35 69
// 1
// 42
// 3
// 42 35 69
// Output 2 :
// Inventory List: 12 78 35 69 
// Inserting Item: 42
// Inventory List: 12 78 35 69 42 
// Removing Item: 42
// Inventory List: 12 78 35 69 
// Removing Item: 35
// Inventory List: 12 78 69 
// Removing Item: 69
// Inventory List: 12 78 
// theme
// instruction
// Fill your code here
// C++ (17)
// #include <iostream>

// using namespace std;

// #define MAX_SIZE 15

// void printInventory(int inventory[], int size) {
//     cout << "Inventory List: ";
//     for (int i = 0; i < size; ++i) {
//         cout << inventory[i] << " ";
//     }
//     cout << endl;
// }

// void insertItem(int inventory[], int& size, int item) {
//     inventory[size] = item;
//     size++;
// }

// void removeItem(int inventory[], int& size, int item) {
//     int i = 0;
//     while (i < size) {
//         if (inventory[i] == item) {
//             for (int j = i; j < size - 1; ++j) {
//                 inventory[j] = inventory[j + 1];
//             }
//             size--;
//         } else {
//             i++;
//         }
//     }
// }

// int main() {
//     int x;
//     cin >> x;
//     int inventory[MAX_SIZE];
    
//     for (int i = 0; i < x; ++i) {
//         cin >> inventory[i];
//     }
//     int currentSize = x;
    
//     printInventory(inventory, currentSize);
    
//     int n;
//     cin >> n;
//     int newItems[MAX_SIZE];
    
//     for (int i = 0; i < n; ++i) {
//         cin >> newItems[i];
//         cout << "Inserting Item: " << newItems[i] << endl;
//         insertItem(inventory, currentSize, newItems[i]);
//         printInventory(inventory, currentSize);
//     }
    
//     int m;
//     cin >> m;
//     int removeItems[MAX_SIZE];
    
//     for (int i = 0; i < m; ++i) {
//         cin >> removeItems[i];
//         cout << "Removing Item: " << removeItems[i] << endl;
//         removeItem(inventory, currentSize, removeItems[i]);
//         printInventory(inventory, currentSize);
//     }
    
//     return 0;
// }
// Single File Programming Question
// Problem Statement



// You're managing a list of product IDs on an e-commerce platform. Each product ID is an integer representing a unique product. You need to search for specific products in the list using two different search methods: linear search and binary search.



// Linear Search: This method is used when the list of product IDs is unsorted. You'll traverse the entire list to find the desired product ID.
// Binary Search: This method is used when the list of product IDs is sorted in ascending order. You'll repeatedly divide the list in half to locate the desired product ID.
// Input format :
// The first line of input contains an integer n, representing the number of products in the list.

// The second line contains n space-separated integers, each representing a unique product ID.

// The third line contains an integer key, representing the product ID to search for in the list.

// Output format :
// The first line of output prints which search method is used, either "Using Binary Search" or "Using Linear Search", depending on whether the list is sorted.

// The second line prints one of the following:

// If the product ID is found, print "[key] found at index [index]". The index value starts from 0.
// If the product ID is not found, print "[key] not found in the list".


// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 100 ≤ product ID, key ≤ 999

// Sample test cases :
// Input 1 :
// 5
// 101 405 303 604 505
// 303
// Output 1 :
// Using Linear Search
// 303 found at index 2
// Input 2 :
// 5
// 101 405 303 604 505
// 308
// Output 2 :
// Using Linear Search
// 308 not found in the list
// Input 3 :
// 5
// 101 205 303 404 505
// 404
// Output 3 :
// Using Binary Search
// 404 found at index 3
// Input 4 :
// 5
// 101 205 303 404 505
// 409
// Output 4 :
// Using Binary Search
// 409 not found in the list
// theme
// instruction
// Fill
// // You are using GCC
// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key) {
//     //Type your code here
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             return i;
//         }
//     }
//     return -1;

    
// }

// int binarySearch(int arr[], int n, int key) {
//     //Type your code here
//     int left = 0, right = n - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == key) {
//             return mid;
//         } else if (arr[mid] < key) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return -1;

    
// }

// bool isSorted(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int searchArray(int arr[], int n, int key) {
//     if (isSorted(arr, n)) {
//         cout << "Using Binary Search" << endl;
//         return binarySearch(arr, n, key);
//     } else {
//         cout << "Using Linear Search" << endl;
//         return linearSearch(arr, n, key);
//     }
// }

// int main() {
//     int n, key;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     cin >> key;

//     int result = searchArray(arr, n, key);

//     if (result != -1) {
//         cout << key << " found at index " << result;
//     } else {
//         cout << key << " not found in the list";
//     }

//     return 0;
// }


// vQuestion No: 3
// reportIcon
// Single File Programming Question
// Problem Statement



// ﻿You're managing employee records for a company. The employee IDs from two different departments are stored in two separate arrays, both sorted in ascending order. Your task is to merge these two sorted arrays into a single sorted array, ensuring that the order is maintained.

// Input format :
// The first line of input contains an integer n, representing the number of employees in the first department.

// The second line contains n space-separated integers, each representing a sorted employee ID from the first department.

// The third line contains an integer m, representing the number of employees in the second department.

// The fourth line contains m space-separated integers, each representing a sorted employee ID from the second department.

// Output format :
// The output prints the merged sorted employee IDs from both departments.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 0 ≤ n, m ≤ 10

// 101 ≤ employee ID ≤ 990

// Sample test cases :
// Input 1 :
// 4
// 101 203 305 407
// 4
// 102 204 306 408
// Output 1 :
// 101 102 203 204 305 306 407 408 
// Input 2 :
// 4
// 101 203 305 407
// 4
// 203 305 508 609
// Output 2 :
// 101 203 203 305 305 407 508 609 
// Input 3 :
// 3
// 102 204 306
// 0
// Output 3 :
// 102 204 306 
// Input 4 :
// 2
// 101 202
// 4
// 150 250 350 450
// Output 4 :
// 101 150 202 250 350 450 
// #include <iostream>
// using namespace std;

// void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2) {
//     int i = 0, j = 0;
//     while (i < n1 && j < n2) {
//         if (arr1[i] < arr2[j]) {
//             cout << arr1[i] << " ";
//             i++;
//         } else {
//             cout << arr2[j] << " ";
//             j++;
//         }
//     }
    
//     while (i < n1) {
//         cout << arr1[i] << " ";
//         i++;
//     }
    
//     while (j < n2) {
//         cout << arr2[j] << " ";
//         j++;
//     }
    
//     cout << endl;
// }

// int main() {
//     int n1, n2;
    
//     cin >> n1;
//     int arr1[n1];
//     for (int i = 0; i < n1; ++i) {
//         cin >> arr1[i];
//     }
    
//     cin >> n2;
//     int arr2[n2];
//     for (int i = 0; i < n2; ++i) {
//         cin >> arr2[i];
//     }
    
//     mergeSortedArrays(arr1, n1, arr2, n2);

//     return 0;
// }
// Single File Programming Question
// Problem Statement



// You're an instructor managing a list of exam scores for a group of students. The scores are stored in an array, and you need to sort this array in ascending order so that you can easily identify the highest and lowest scores. You'll use two different sorting algorithms: bubble sort and selection sort.



// Bubble sort is selected if the array is nearly sorted. An array is considered nearly sorted if at most one pair of elements is out of order. The selection sort is chosen if the array is not nearly sorted.

// Input format :
// The first line of input contains an integer n, representing the number of students.

// The second line contains n space-separated integers, representing the exam scores of students.

// Output format :
// The first line of output prints which sort algorithm is used, either "Using Bubble Sort" or "Using Selection Sort".

// The second line prints the sorted exam scores in ascending order.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// 1 ≤ exam score ≤ 100

// Sample test cases :
// Input 1 :
// 6
// 64 78 85 92 99 73
// Output 1 :
// Using Bubble Sort
// Sorted Exam Scores: 64 73 78 85 92 99 
// Input 2 :
// 5
// 32 91 53 76 28
// Output 2 :
// Using Selection Sort
// Sorted Exam Scores: 28 32 53 76 91 
// theme
// instruction
// Fill your code here
// C++ (17)
//  // You are using GCC
// #include <iostream>
// using namespace std;

// void bubbleSort(int scores[], int n) {
//     //Type your code here
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (scores[j] > scores[j + 1]) {
//                 swap(scores[j], scores[j + 1]);
//             }
//         }
//     }

    
// }

// void selectionSort(int scores[], int n) {
//     //Type your code here
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (scores[j] < scores[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         if (minIndex != i) {
//             swap(scores[i], scores[minIndex]);
//         }
//     }

    
// }

// bool isNearlySorted(int scores[], int n) {
//     int count = 0;
//     for (int i = 0; i < n - 1; i++) {
//         if (scores[i] > scores[i + 1]) {
//             count++;
//             if (count > 1) { 
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// void sortArray(int scores[], int n) {
//     if (isNearlySorted(scores, n)) {
//         cout << "Using Bubble Sort" << endl;
//         bubbleSort(scores, n);
//     } else {
//         cout << "Using Selection Sort" << endl;
//         selectionSort(scores, n);
//     }
// }

// void printArray(int scores[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << scores[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     int examScores[n];
//     for (int i = 0; i < n; i++) {
//         cin >> examScores[i];
//     }

//     sortArray(examScores, n);

//     cout << "Sorted Exam Scores: ";
//     printArray(examScores, n);

//     return 0;
// }


// Question No: 5
// reportIcon
// Single File Programming Question
// Problem Statement



// You're a coach managing a list of finishing times for athletes in a race. The times are stored in an array, and you need to sort this array in ascending order to determine the rankings.



// You'll use the insertion sort algorithm to accomplish this.

// Input format :
// The first line of input contains an integer n, representing the number of athletes.

// The second line contains n space-separated integers, each representing the finishing time of an athlete in seconds.

// Output format :
// The output prints the sorted finishing times of the athletes in ascending order.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// 10 ≤ finishing time ≤ 120

// Sample test cases :
// Input 1 :
// 5
// 75 89 65 90 70
// Output 1 :
// 65 70 75 89 90 
// Input 2 :
// 5
// 60 65 70 75 80
// Output 2 :
// 60 65 70 75 80 
// Input 3 :
// 5
// 90 85 80 75 70
// Output 3 :
// 70 75 80 85 90 
// Input 4 :
// 5
// 80 85 80 70 85
// Output 4 :
// 70 80 80 85 85 
// // You are using GCC
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
    
//     int times[n];
//     for (int i = 0; i < n; i++) {
//         cin >> times[i];
//     }
    
//     insertionSort(times, n);
    
//     for (int i = 0; i < n; i++) {
//         cout << times[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }
