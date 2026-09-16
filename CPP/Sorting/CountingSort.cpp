#include<iostream>
using namespace std;

void CountingSort(int A[], int n){
   int largest = 0;

   for(int i = 0; i < n; i++){
        if(A[i]>largest){
            largest = A[i];
        }
   }

   int count[largest+1] = {0};

   for(int i = 0; i < n; i++){
        count[A[i]]++;
   }

   int k = 0;
   for(int i = 0; i < largest + 1; i++){
        while( count[i] > 0 ){
            A[k++] = i;
            count[i]--;
        }
   }
}

int main(){
    int A[] = { 1,5,3,6,10,7,9};
    int n = sizeof(A)/sizeof(A[0]);

    CountingSort(A,n);

    for(int i = 0; i < n; i++){
        cout<< A[i] <<" ";
    }
    
    cout<< endl;

    return 0;
}