#include<iostream>
using namespace std;

void Merging(int A[], int low, int mid, int high){
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    while( (i <= mid) && (j <= high)){
        if(A[i] < A[j]){
            temp[k] = A[i];
            i++;
            k++;
        }
        else{
            temp[k] = A[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
        temp[k] = A[i];
        i++;
        k++;
    }
    while(j <= high){
        temp[k] = A[j];
        j++;
        k++;
    }

    for(int k=0, i=low; i <= high; k++, i++){
        A[i] = temp[k];
    }
    
}

void MergeSort(int A[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;

        MergeSort(A,low,mid);
        MergeSort(A,mid+1,high);

        Merging(A,low,mid,high);
    }
}

int main(){
    int A[] = { 1,5,3,6,10,7,9};
    int n = sizeof(A)/sizeof(A[0]);

    MergeSort(A,0,n);

    for(int i = 0; i < n; i++){
        cout<< A[i] <<" ";
    }
    
    cout<< endl;

    return 0;
}