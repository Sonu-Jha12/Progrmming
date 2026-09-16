#include<iostream>
using namespace std;

void SelectionSort(int A[], int n){
    for(int i = 0; i < n; i++){
        int minPos = i;
        for(int j = i + 1; j < n; j++){
            if(A[minPos] > A[j]){
                minPos = j;
            }
        }
        int temp = A[minPos];
        A[minPos] = A[i];
        A[i] = temp;
    }
}

int main(){
    int A[] = { 1,5,3,6,10,7,9};
    int n = sizeof(A)/sizeof(A[0]);

    SelectionSort(A,n);

    for(int i = 0; i < n; i++){
        cout<< A[i] <<" ";
    }
    
    cout<< endl;

    return 0;
}