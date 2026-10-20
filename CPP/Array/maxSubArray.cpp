#include<iostream>
#include<climits>
using namespace std;
void printSubArray(int *Arr, int n){
    int maxSum = INT_MIN;
    for(int start = 0; start < n ; start++){
        for(int end = start ; end < n ; end++){
            int currSum = 0;
            for(int i = start; i <= end ; i++){
                currSum += Arr[i];
            }
            cout<<currSum<<" , ";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Sub Array Sum is "<<maxSum;
}
int main(){
    int Arr[] = {-2,5,-4,3,1};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    printSubArray(Arr, n);
    cout<<endl;

    return 0;
}