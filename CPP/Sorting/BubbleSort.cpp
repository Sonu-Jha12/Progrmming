#include<iostream>
using namespace std;

void BubbleSort(int A[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int A[] = { 1,5,3,6,10,7,9};
    int n = sizeof(A)/sizeof(A[0]);

    BubbleSort(A,n);

    for(int i = 0; i < n; i++){
        cout<< A[i] <<" ";
    }
    
    cout<< endl;

    return 0;
}