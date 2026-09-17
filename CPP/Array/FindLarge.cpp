#include<iostream>
using namespace std;

int FindLargest(int A[], int n){
    int maxElement = A[0];

    for(int i = 1; i < n; i++){
        if(maxElement < A[i]){
            maxElement = A[i];
        }
    }
    return maxElement;
}

int main(){
    int A[] = {2,4,1,6,3,9,5};
    int n = sizeof(A)/sizeof(int);

    cout<<"Large Number in Array is "<<FindLargest(A, n)<<endl;

    return 0;
}