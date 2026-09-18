#include<iostream>
using namespace std;

int linearSearch(int A[], int n, int key){
    for(int i=0; i<n; i++){
        if(A[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int A[] = {10, 4, 2, 6, 1, 8, 3};
    int n = sizeof(A)/sizeof(int);

    int key;
    cout<<"Enter Key : ";
    cin>> key;

    bool isFound = linearSearch(A,n,key);

    if(isFound){
        cout<<"key is Found "<<endl;
    }
    else{
        cout<<"key is not Found "<<endl;
    }

    return 0;
}