#include<iostream>
using namespace std;
void bubbleSort(int scores[], int n) {
    bool swapped;
    for(int i=0;i<n-1;i++) {
        swapped = false;
        for(int j=0;j<n-i-1;j++) {
            if(scores[j] > scores[j+1]) {
                int temp = scores[j];
                scores[j] = scores[j+1];
                scores[j + 1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }
}
void selectionSort(int scores[],int n) {
    for(int i=0;i<n-1;i++) {
        int minIndex = i;
        for(int j=i+1;j<n;j++) {
            if(scores[j] < scores[minIndex]) {
                minIndex = j;
            }
        }
        int temp = scores[minIndex];
        scores[minIndex] = scores[i];
        scores[i] = temp;
    }
}
bool isNearlySorted(int scores[], int n) {
    int count = 0;
    for(int i=0;i<n-1;i++) {
        if(scores[i] > scores[i+1]) {
            count++;
            if(count > 1) {
                return false;
            }
        }
    }
    return true;
}
void sortArray(int scores[], int n) {
    if(isNearlySorted(scores, n)) {
        cout<<"Using Bubble Sort" << endl;
        bubbleSort(scores, n);
    }else {
        cout<<"Using Selection Sort"<<endl;
        selectionSort(scores, n);
    }
}
void printArray(int scores[], int n) {
    for(int i=0;i<n;i++) {
        cout<<scores[i] << " ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    
    int examScores[n];
    for(int i=0;i<n;i++) {
        cin>>examScores[i];
    }
    sortArray(examScores, n);

    
    cout<<"Sorted Exam Scores: ";
    bubbleSort(examScores,n);
    selectionSort(examScores,n);
    isNearlySorted(examScores,n);

    printArray(examScores, n);
    
    return 0;
}
