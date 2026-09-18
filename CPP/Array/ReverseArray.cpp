#include<iostream>
using namespace std;

void ReverseArray(int A[], int n){
    int left = 0;
    int right = n-1;

    while(left < right){
        int temp = A[left];
        A[left] = A[right];
        A[right] = temp;
        left++;
        right--;
    }
}

int main(){
    int A[] = {10, 4, 2, 1, 5, 8, 3};
    int n = sizeof(A)/sizeof(int);

    cout<<"Original Array is : ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }  
    cout<<endl; 
    
    ReverseArray(A,n);

    cout<<"Reversed Array is : ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }  
    cout<<endl;

    return 0;
}