#include<iostream>
using namespace std;

int BinSearch(int A[], int n, int key){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(A[mid] == key){
            return mid;
        }
        else if(A[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int A[] = { 2, 5, 7, 8, 9, 11, 15, 50, 65, 100};
    int n = sizeof(A)/sizeof(int);

    int key;

    cout<<"Enter Key : ";
    cin>> key;

    int index = BinSearch(A,n,key);

    if(index < 0){
        cout<<"Key is not Found";
    }
    else{
        cout<<"Key Found at index "<<index;
    }

    cout<<endl;

    return 0;
}