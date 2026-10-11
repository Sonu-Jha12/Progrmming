#include<iostream>
using namespace std;
void printSubArray(int *Arr, int n){
    for(int start = 0; start < n ; start++){
        for(int end = start ; end < n ; end++){
            for(int i = start; i <= end ; i++){
                cout<<Arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}
int main(){
    int Arr[] = {2,5,4,3,1};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    printSubArray(Arr, n);
    cout<<endl;

    return 0;
}