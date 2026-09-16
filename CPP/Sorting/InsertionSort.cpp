#include<iostream>
using namespace std;

void InsertionSort(int A[], int n){
    for(int i = 0; i < n; i++){
        int curr = A[i];
        int prev = i - 1;
        
        while( prev >= 0 && A[prev] > curr){
            A[prev+1] = A[prev];
            prev--;
        }
        A[prev + 1] = curr;
    }
}

int main(){
    int A[] = { 1,5,3,6,10,7,9};
    int n = sizeof(A)/sizeof(A[0]);

    InsertionSort(A,n);

    for(int i = 0; i < n; i++){
        cout<< A[i] <<" ";
    }
    
    cout<< endl;

    return 0;
}