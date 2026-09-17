#include<iostream>
using namespace std;

int FindMin(int A[], int n){
    int minElement = A[0];

    for(int i = 1; i < n; i++){
        if(minElement > A[i]){
            minElement = A[i];
        }
    }
    return minElement;
}

int main(){
    int A[] = {2,4,1,6,3,9,5};
    int n = sizeof(A)/sizeof(int);

    cout<<"Smallest Number in Array is "<<FindMin(A, n)<<endl;

    return 0;
}