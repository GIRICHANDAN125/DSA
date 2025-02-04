// Problem Statement



// Assist Tamizh, a student who is learning about arrays. He came across a question that deletes the first element from an array. Since he is new to coding, he is unable to crack the logic. Help him with a program that should prompt the user to enter the elements and then display the updated array after deleting the first element.

// Input format :
// The first line of input contains an integer n, representing the size of the array.

// The second line of input contains n space-separated integers representing the elements of the array.

// Output format :
// The output displays the updated array after deleting the first element, separated by a space.



// Refer to the sample output format for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// -100 ≤ elements of the array ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// Output 1 :
// 2 3 4 5 
// Input 2 :
// 7
// 12 65 34 80 38 51 72
// Output 2 :
// 65 34 80 38 51 72 
// Input 3 :
// 5
// 8 -2 3 -4 6
// Output 3 :
// -2 3 -4 6 

// // You are using GCC
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// Problem Statement



// Vaishnavi is developing a program for a mathematical research project focusing on pattern analysis within integer datasets. The research team needs to identify common elements between two distinct datasets to understand overlapping patterns. 



// Your task is to write a program to help her find the common elements between the two datasets (arrays).



// Company Tags: Capgemini

// Input format :
// The first line of input contains an integer n, which represents the size of the first dataset.

// The second line contains n elements of the first dataset, separated by spaces.

// The third line contains an integer m, which represents the size of the second dataset.

// The fourth line contains m elements of the second dataset, separated by spaces.

// Output format :
// The output prints "Common Elements: " followed by the common elements between the two datasets.

// If no common elements are found, output "None".



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n, m ≤ 20

// -100 ≤ dataset elements ≤ 100

// Sample test cases :
// Input 1 :
// 4
// 1 2 3 4
// 3
// 3 4 5
// Output 1 :
// Common Elements: 3 4 
// Input 2 :
// 5
// 7 8 9 10 11
// 3
// 12 13 14
// Output 2 :
// Common Elements: None
// Input 3 :
// 10
// -1 -2 -3 -4 -5 0 1 2 3 4
// 5
// 0 -1 3 5 10
// Output 3 :
// Common Elements
// #include <iostream>

// int main() {
//     using namespace std;

//     int n, m;

//     cin >> n;
//     int arr1[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> arr1[i];
//     }
//     cin >> m;
//     int arr2[m];
//     for (int i = 0; i < m; ++i) {
//         cin >> arr2[i];
//     }

//     bool foundCommon = false;
//     cout << "Common Elements:";
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (arr1[i] == arr2[j]) {
//                 cout << " " << arr1[i];
//                 foundCommon = true;
//                 break; // Move to the next element in dataset1
//             }
//         }
//     }

//     if (!foundCommon) {
//         cout << " None";
//     }
//     cout << endl;

//     return 0;
// }





// Problem Statement



// Emma is organizing an array of characters for a coding competition. She needs to reverse the order of the characters in the array to meet the competition's requirements. 



// Assist her in writing a program that takes the size and the characters as input, reverses the array and prints the updated one.

// Input format :
// The first line of input consists of an integer n, that represents the size of the array.

// The second line consists of n characters in the array, separated by spaces.

// Output format :
// The output prints a single line displaying the updated array after the characters are reversed.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 20

// The input characters can be any printable ASCII characters.

// Sample test cases :
// Input 1 :
// 4
// A B C D
// Output 1 :
// D C B A 
// Input 2 :
// 8
// S T R I N G S !
// Output 2 :
// ! S G N I R T S 
// theme
// instruction
// Fill your code here
// C (17)
// Status





// // You are using GCC
// #include<iostream>
// // #include<string>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char arr[20];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0,j=n-1;i<j;i++,j--){
//         swap(arr[i],arr[j]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
    
// }

//////////////////////////////////////////////////merging topic


// Problem Statement



// You are working as a software developer for an online retail company. The company has tasked you with creating a program to merge two arrays that contain product IDs. 



// The first array represents the product IDs of items currently in stock. The second array represents the product IDs of items in a customer's shopping cart. Your goal is to merge these two arrays into a single, sorted list of unique product IDs without any duplicates.

// Input format :
// The first line of input consists of an integer N, representing the number of products in the stock array.

// The second line consists of N space-separated sorted integers representing the product IDs of the stock array.

// The third line of input consists of an integer M, representing the number of products in the cart array.

// The fourth line consists of M space-separated sorted integers representing the product IDs of the cart array.

// Output format :
// The output displays the merged array, which is the merged product IDs in sorted order without any duplicates.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N, M ≤ 20

// 0 ≤ product IDs of the stock and cart array ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 4
// 6 7 8 9
// Output 1 :
// 1 2 3 4 5 6 7 8 9 
// Input 2 :
// 6
// 2 3 5 7 8 9 
// 3
// 1 3 5
// Output 2 :
// 1 2 3 5 7 8 9 
// theme
// instruction
// Fill your code here
// C++ (17)
// #include <iostream>
// using namespace std;

// int main() {
//     const int MAX_SIZE = 40;
//     int stock[MAX_SIZE], cart[MAX_SIZE], merged[MAX_SIZE * 2];
//     int N, M, k = 0;

//     cin >> N;
//     for (int i = 0; i < N; ++i) {
//         cin >> stock[i];
//     }
    
//     cin >> M;
//     for (int i = 0; i < M; ++i) {
//         cin >> cart[i];
//     }
    
//     int i = 0, j = 0;
    
//     while (i < N && j < M) {
//         if (stock[i] < cart[j]) {
//             if (k == 0 || merged[k-1] != stock[i]) {
//                 merged[k++] = stock[i];
//             }
//             ++i;
//         } else if (cart[j] < stock[i]) {
//             if (k == 0 || merged[k-1] != cart[j]) {
//                 merged[k++] = cart[j];
//             }
//             ++j;
//         } else {
//             if (k == 0 || merged[k-1] != stock[i]) {
//                 merged[k++] = stock[i];
//             }
//             ++i;
//             ++j;
//         }
//     }
    
//     while (i < N) {
//         if (k == 0 || merged[k-1] != stock[i]) {
//             merged[k++] = stock[i];
//         }
//         ++i;
//     }
    
//     while (j < M) {
//         if (k == 0 || merged[k-1] != cart[j]) {
//             merged[k++] = cart[j];
//         }
//         ++j;
//     }
    
//     for (int l = 0; l < k; ++l) {
//         cout << merged[l] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }
     





//      Single File Programming Question
// Problem Statement



// You are developing a program that merges two sorted arrays of student IDs. The first array contains the student IDs of students who have successfully completed Course A, while the second array contains the student IDs of students who have successfully completed Course B. 



// Your task is to merge these two arrays into a single sorted array that will be used for further analysis.



// Company Tags: CapgeminI

// Input format :
// The first line of input consists of an integer n, representing the size of the first array.

// The second line contains n space-separated integers representing the elements of the first array.

// The third line of input consists of an integer m, representing the size of the second array.

// The fourth line of input consists of m space-separated integers, representing the elements of the second array.

// Output format :
// The output displays the merged array, with elements separated by a space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1 ≤ n, m ≤ 10

// 1 ≤ array elements ≤ 25

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 6
// 6 7 8 9 10 11
// Output 1 :
// 1 2 3 4 5 6 7 8 9 10 11 
// Input 2 :
// 3
// 1 2 3
// 2
// 4 5
// Output 2 :
// 1 2 3 4 5 
// You are using GCC
// #include <iostream>
// using namespace std;

// int main() {
//     const int MAX_SIZE = 40;
//     int stock[MAX_SIZE], cart[MAX_SIZE], merged[MAX_SIZE * 2];
//     int N, M, k = 0;

//     cin >> N;
//     for (int i = 0; i < N; ++i) {
//         cin >> stock[i];
//     }
    
//     cin >> M;
//     for (int i = 0; i < M; ++i) {
//         cin >> cart[i];
//     }
    
//     int i = 0, j = 0;
    
//     while (i < N && j < M) {
//         if (stock[i] < cart[j]) {
//             if (k == 0 || merged[k-1] != stock[i]) {
//                 merged[k++] = stock[i];
//             }
//             ++i;
//         } else if (cart[j] < stock[i]) {
//             if (k == 0 || merged[k-1] != cart[j]) {
//                 merged[k++] = cart[j];
//             }
//             ++j;
//         } else {
//             if (k == 0 || merged[k-1] != stock[i]) {
//                 merged[k++] = stock[i];
//             }
//             ++i;
//             ++j;
//         }
//     }
    
//     while (i < N) {
//         if (k == 0 || merged[k-1] != stock[i]) {
//             merged[k++] = stock[i];
//         }
//         ++i;
//     }
    
//     while (j < M) {
//         if (k == 0 || merged[k-1] != cart[j]) {
//             merged[k++] = cart[j];
//         }
//         ++j;
//     }
    
//     for (int l = 0; l < k; ++l) {
//         cout << merged[l] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }


// Single File Programming Question
// Problem Statement



// Rasha is given two arrays of numbers, and her task is to merge them into a single array and find the median value. Write a program to assist Rasha that takes two arrays as input and returns the median value.

// Input format :
// The first line contains the sizes of the first and second arrays, n1 and n2.

// The second line contains n1 space-separated integers, representing the elements of the first sorted array, arr1.

// The third line contains n2 space-separated integers, representing the elements of the second sorted array, arr2.

// Output format :
// The output prints the median of the merged array, as a double value rounded to one decimal place.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n1, n2 ≤ 10

// 1 ≤ elements of arr1, arr2 ≤ 100

// Sample test cases :
// Input 1 :
// 3 4
// 1 2 3
// 4 5 6 7
// Output 1 :
// 4.0
// Input 2 :
// 5 5
// 1 2 3 4 5
// 6 7 8 9 10
// Output 2 :
// 5.5

// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;
    
//     int arr1[n1], arr2[n2], merged[n1 + n2];
    
//     for (int i = 0; i < n1; ++i) {
//         cin >> arr1[i];
//     }
    
//     for (int i = 0; i < n2; ++i) {
//         cin >> arr2[i];
//     }
    
//     int i = 0, j = 0, k = 0;
    
//     while (i < n1 && j < n2) {
//         if (arr1[i] < arr2[j]) {
//             merged[k++] = arr1[i++];
//         } else {
//             merged[k++] = arr2[j++];
//         }
//     }
    
//     while (i < n1) {
//         merged[k++] = arr1[i++];
//     }
    
//     while (j < n2) {
//         merged[k++] = arr2[j++];
//     }
    
//     int totalSize = n1 + n2;
//     double median;
    
//     if (totalSize % 2 == 0) {
//         median = (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
//     } else {
//         median = merged[totalSize / 2];
//     }
    
//     cout.precision(1);
//     cout << fixed << median << endl;
    
//     return 0;
// }

//////////////////////////////////////////////searching l


// Shyam needs to count the occurrences of a target number in a sorted array. Given an array of integers and a target number, implement a function to find how many times the target appears in the array. Return the count of occurrences.



// Guide him as he wants to develop this program using a binary search algorithm.

// Input format :
// The first line of input consists of an integer N, representing the number of array elements.

// The second line consists of N space-separated integers representing the sorted array elements.

// The third line consists of an integer representing the target element to find its frequency.

// Output format :
// The output prints the frequency of the given target element.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 30

// 0 ≤ elements, target ≤ 100

// Sample test cases :
// Input 1 :
// 10
// 1 4 5 5 5 8 9 9 10 15
// 5
// Output 1 :
// 3
// Input 2 :
// 10
// 1 2 2 2 2 3 4 7 8 8
// 10
// Output 2 :
// 0
// theme
// instruction
// Fill your code here
// C++ (17)


// #include <iostream>
// using namespace std;

// int countOccurrences(int arr[], int size, int target) {
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     int size;
//     cin >> size;

//     int* arr = new int[size];

//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cin >> target;

//     int result = countOccurrences(arr, size, target);

//     cout  << result << endl;

//     delete[] arr;

//     return 0;
// }
// Single File Programming Question
// Problem Statement



// Tom is writing a story and wants to check if a particular word is present in a given sentence. Help Tom by writing a program that determines whether a specific word is found within the sentence. Use linear search.



// Company Tags: Capgemini

// Input format :
// The first line of input consists of a string representing the sentence to be searched.

// The second line consists of the word to search for in the sentence.

// Output format :
// The output prints whether the given word is present in the sentence or not.



// Refer to the sample output for the exact format.

// Code constraints :
// The maximum length of the input sentence is 1000 words.

// Sample test cases :
// Input 1 :
// Constellations of stars, murals on city walls
// stars
// Output 1 :
// The word 'stars' is present in the given sentence.
// Input 2 :
// Constellations of Stars, murals on city walls
// stars
// Output 2 :
// The word 'stars' is not present in the given sentence.
// theme
// instruction
// Fill your code here
// C (17)
//  #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     string sentence, word;
//     getline(cin, sentence);
//     cin >> word;

//     stringstream ss(sentence);
//     string currentWord;
//     bool found = false;

//     while (ss >> currentWord) {
//         if (currentWord == word) {
//             found = true;
//             break;
//         }
//     }

//     if (found) {
//         cout << "The word '" << word << "' is present in the given sentence." << endl;
//     } else {
//         cout << "The word '" << word << "' is not present in the given sentence." << endl;
//     }

//     return 0;
// }

// Single File Programming Question
// Problem Statement



// Henry needs a program to determine the correct position to insert a new song into a sorted playlist based on its duration. The program should read the size of the playlist, the sorted durations of the existing songs, and the duration of the new song. 



// Using binary search, it should insert the new song at the appropriate index and output the index of the same while maintaining the sorted order.

// Input format :
// The first line of input consists of N, representing the size of the music playlist.

// The second line contains the N integers, representing the duration of the songs separated by spaces.

// The third line contains an integer M, representing the duration of the new song to be inserted.

// Output format :
// If the song with the specified duration is already present in the playlist, the output will return the index of that duration.

// If the song is not found in the playlist, the output will return the index where the song is inserted to maintain the ascending order of the playlist.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 3 ≤ N ≤ 100

// 1 ≤ duration of the song ≤ 1000

// The index is 0-based.

// Sample test cases :
// Input 1 :
// 4
// 1 3 5 6
// 5
// Output 1 :
// 2
// Input 2 :
// 6
// 1 3 5 6 8 10
// 12
// Output 2 :
// 6
// Input 3 :
// 4
// 1 3 5 6
// 4
// Output 3 :
// 2
// theme
// instruction
// Fill your code here
// C++ (17)
//  #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int target) {
//     int low = 0, high = size - 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return low;
// }

// int main() {
//     int N;
//     cin >> N;
//     int playlist[N];
//     for (int i = 0; i < N; i++) {
//         cin >> playlist[i];
//     }
//     int M;
//     cin >> M;

//     int index = binarySearch(playlist, N, M);

//     cout << index << endl;

//     return 0;
// }
// Problem Statement



// Given an array of integers, implement a recursive linear search algorithm to find the index of a target element. The program should read the number of elements in the array, the elements themselves, and the target element to search for. If the target element is found, the program should output its index; otherwise, it should indicate that the element is not present. 

// Input format :
// The first line of input consists of an integer N, representing the number of elements.

// The second line consists of N space-separated integers representing the elements.

// The third line consists of an integer d, representing the element to be searched.

// Output format :
// If the target element d is found in the array, print "Element d is present at index X" where X is the index of the target element. The index starts from 0.

// Otherwise, print "Element d is not present".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 100

// 1 ≤ elements ≤ 105

// 1 ≤ d ≤ 105

// Sample test cases :
// Input 1 :
// 5
// 40 20 50 30 10
// 30
// Output 1 :
// Element 30 is present at index 3
// Input 2 :
// 5
// 40 20 50 30 10
// 80
// Output 2 :
// Element 80 is not present
// // You are using GCC
// #include <iostream>
// using namespace std;

// int recursiveLinearSearch(int arr[], int size, int index, int target) {
//     if (index == size) {
//         return -1; 
//     }
//     if (arr[index] == target) {
//         return index;
//     }
//     return recursiveLinearSearch(arr, size, index + 1, target);
// }

// int main() {
//     int N;
//     cin >> N;
//     int arr[N];
//     for (int i = 0; i < N; i++) {
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;

//     int result = recursiveLinearSearch(arr, N, 0, d);

//     if (result != -1) {
//         cout << "Element " << d << " is present at index " << result << endl;
//     } else {
//         cout << "Element " << d << " is not present" << endl;
//     }

//     return 0;
// }


////////////////////                ////////////sorting
/////5 qustion

// Question No: 1
// reportIcon
// Single File Programming Question
// Problem Statement



// Imagine you are working on a student management system for a school. As part of the system, you need to develop a feature that allows teachers to enter the names of students in a class and obtain a sorted list of student names. This will help them organize the students alphabetically for various administrative tasks.



// Write a program that takes input for the number of students in the class and their names. The program should then sort the names in ascending order using bubble sort and display the sorted list.



// Company Tags: TCS 

// Input format :
// The first line of input consists of the number of students n in the class.

// The second line of input consists of n space separated strings, representing students' names.

// Output format :
// The output prints the students' names in sorted order, separated by space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// The strings contains both lowercases and uppercases with at most 50 character.



// Sample test cases :
// Input 1 :
// 3
// Elena Stefan Damon
// Output 1 :
// Damon Elena Stefan 
// Input 2 :
// 6
// Apple Orange Carrot Banana Grapes Kiwi
// Output 2 :
// Apple Banana Carrot Grapes Kiwi Orange 
// theme
// instruction
// Fill your code here
// C (17)
//  #include<iostream>
// #include<string>
// using namespace std;
// void sorted(string arr[],int n){
//     int swap=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 string temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 swap=1;
//             }
//         }
//         if(swap==0){
//             break;
//         }
//     }
// }
// void print(string arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     string arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sorted(arr,n);
//     print(arr,n);
//     return 0;
    
// }


// Question No: 2
// reportIcon
// Single File Programming Question
// Problem Statement



// You are developing a sports analytics system for a basketball team. As part of the system, you need to implement a feature that finds the second largest player's height from a given array of player heights.



// Write a program that takes user input for the number of players and their respective heights. The program should use the selection sort algorithm to sort the player heights in non-increasing order. After sorting, it should display the sorted array of player heights and display the second largest player's height from the sorted list.

// Input format :
// The first line of input consists of an integer n, representing the number of players.

// The second line of input consists of n space-separated integers, representing the heights of the players.

// Output format :
// The first line of output displays "Sorted array:" followed by n space-separated integers, representing the sorted array of player heights.

// The second line of output displays "The second largest element is " followed by an integer, representing the second largest player's height.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 1 ≤ height ≤ 250

// Sample test cases :
// Input 1 :
// 5
// 135 169 185 174 212
// Output 1 :
// Sorted array: 212 185 174 169 135 
// The second largest element is 185
// Input 2 :
// 6
// 174 125 136 195 150 138
// Output 2 :
// Sorted array: 195 174 150 138 136 125 
// The second largest element is 174
// #include <iostream>

// using namespace std;

// void selectionSortDescending(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int maxIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] > arr[maxIndex]) {
//                 maxIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[maxIndex];
//         arr[maxIndex] = temp;
//     }
// }

// int main() {
//     int n;
//     cin >> n;

    
//     int heights[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> heights[i];
//     }
    
//     selectionSortDescending(heights, n);
    
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << heights[i] << " ";
//     }
//     cout << endl;
    
//     if (n > 1) {
//         cout << "The second largest element is " << heights[1] << endl;
//     } else {
//         cout << "There is no second largest element" << endl;
//     }
    
//     return 0;
// }
// Single File Programming Question
// Problem Statement



// You are developing a sales analytics system for a retail company. As part of the system, you need to implement a feature that sorts the sales data in descending order based on the revenue generated by each product.



// Write a program that prompts the user to enter the number of products and their respective revenue figures. The program should then use the insertion sort algorithm to sort the revenue figures in descending order and print with its iteration. After sorting, the program should display the products along with their corresponding sorted revenue figures.



// Company Tags: Capgemini 

// Input format :
// The first line of input consists of an integer N, representing the size of the array.

// The second line of input consists of the N space separated integers representing the array elements.

// Output format :
// The first line of output prints "Initial order: " followed by the initial array of elements, separated by space.

// The following n-1 lines prints "After Iteration X: Y" where X is the iteration number and Y represents the result of each iteration separated by space.

// The last line of output prints "Sorted order: " followed by the final sorted array in decreasing order.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 1 ≤ array elements ≤ 1000

// Sample test cases :
// Input 1 :
// 4
// 471 774 814 136
// Output 1 :
// Initial order: 471 774 814 136 
// After Iteration 1: 774 471 814 136 
// After Iteration 2: 814 774 471 136 
// After Iteration 3: 814 774 471 136 
// Sorted order: 814 774 471 136 
// Input 2 :
// 5
// 207 455 129 367 578
// Output 2 :
// Initial order: 207 455 129 367 578 
// After Iteration 1: 455 207 129 367 578 
// After Iteration 2: 455 207 129 367 578 
// After Iteration 3: 455 367 207 129 578 
// After Iteration 4: 578 455 367 207 129 
// Sorted order: 578 455 367 207 129 
// theme
// instruction
// Fill your code here
// C++ (17)
//  #include <iostream>

// using namespace std;

// void insertionSortDescending(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
        
//         while (j >= 0 && arr[j] < key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;

//         cout << "After Iteration " << i << ": ";
//         for (int k = 0; k < n; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
    
//     int revenue[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> revenue[i];
//     }
    
//     cout << "Initial order: ";
//     for (int i = 0; i < n; i++) {
//         cout << revenue[i] << " ";
//     }
//     cout << endl;
    
//     insertionSortDescending(revenue, n);
    
//     cout << "Sorted order: ";
//     for (int i = 0; i < n; i++) {
//         cout << revenue[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }
// Problem Statement



// You are working on a ticketing system for a popular event. As part of the system, you need to implement a feature that finds the kth smallest ticket price among all the available tickets.



// Write a program that takes user input for the number of tickets and their respective prices. The program should use the selection sort algorithm to sort the ticket prices in non-decreasing order. After sorting, it should display the sorted order of the ticket prices and display the kth smallest ticket price from the sorted list.



// Company Tags: Capgemini 

// Input format :
// The first line of input consists of an integer n, representing the number of tickets.

// The second line of input consists of n space-separated integers, representing the prices of the tickets.

// The third line of input consists of an integer k, representing the position of the ticket price to find (1-indexed).

// Output format :
// The first line of output displays "Sorted order: " followed by n space-separated integers, representing the sorted array of ticket prices.

// The second line of output displays "The kth smallest element is: " followed by an integer, representing the kth smallest ticket price.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 1 ≤ k < n

// 1 ≤ ticket price ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 4 7 8 5
// 3
// Output 1 :
// Sorted order: 1 4 5 7 8 
// The kth smallest element is: 5
// Input 2 :
// 9
// 7 9 6 8 4 5 3 2 1
// 6
// Output 2 :
// Sorted order: 1 2 3 4 5 6 7 8 9 
// The kth smallest element is: 6
// theme
// instruction
// Fill your code here
// C++ (17)
//  #include <iostream>

// using namespace std;

// void selectionSortNonDecreasing(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main() {
//     int n, k;
    
//     cin >> n;
    
//     int prices[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> prices[i];
//     }
    
//     cin >> k;
    
//     selectionSortNonDecreasing(prices, n);
    
//     cout << "Sorted order: ";
//     for (int i = 0; i < n; i++) {
//         cout << prices[i] << " ";
//     }
//     cout << endl;
    
//     cout << "The kth smallest element is: " << prices[k - 1] << endl;
    
//     return 0;
// }
// Single File Programming Question
// Problem Statement



// You are a teacher at a school, and you have recently conducted an exam for your students. The exam grades of the students are represented as an array of integers. You want to determine the number of inversions in the list of grades.



// Given an array of integers, find the inversion count in the array using insertion sort. 



// Inversion Count: For an array, the inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0. If an array is sorted in reverse order, then the inversion count is the maximum. 



// Formally, two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

 

// Example 1



// Input:

// N = 5

// arr[] = {20, 45, 19, 37, 58}

// Output:

// 3

// Explanation:

// Sequences 20, 45, 19, 37, and 58 have three inversions (20, 19), (45, 19), and (45, 37).



// Example 2



// Input:

// N = 4

// arr[] = {8, 4, 2, 1}

// Output:

// 6

// Explanation:

// The sequence has six inversions (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).



// Example 3



// Input:

// N = 5

// arr[] = {29, 37, 42, 54, 61}

// Output:

// 0

// Explanation:

// As the sequence is already sorted, there is no inversion count.



// Example 4



// Input:

// N = 3

// arr[] = {100, 100, 100}

// Output:

// 0

// Explanation:

// As all the elements of the array are the same, there is no inversion count.



// Company Tags: Amazon, Microsoft, Flipkart

// Input format :
// The first line of input consists of N, representing the size of the array.

// The second line of input consists of the N array elements, separated by space.

// Output format :
// The output prints the inversion count in the given array.

// If the given sequence is already sorted, then the output will print 0.



// ﻿Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ N ≤ 150

// Sample test cases :
// Input 1 :
// 4
// 8 4 2 1
// Output 1 :
// 6
// Input 2 :
// 5
// 20 45 19 37 58
// Output 2 :
// 3
// Input 3 :
// 5
// 29 37 42 54 61
// Output 3 :
// 0
// Input 4 :
// 3
// 100 100 100
// Output 4 :
// 0
// #include <iostream>

// using namespace std;

// int countInversions(int arr[], int n) {
//     int inversionCount = 0;
    
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > key) {
//             inversionCount++;
//             j--;
//         }
        
//         j = i - 1; 
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
    
//     return inversionCount;
// }

// int main() {
//     int n;
//     cin >> n;
    
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     int inversionCount = countInversions(arr, n);
    
//     cout << inversionCount << endl;
    
//     return 0;
// }
