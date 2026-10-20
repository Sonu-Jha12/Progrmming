#include<iostream>
#include<climits>
using namespace std;
void printSubArrayUsingKadans(int *Arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n ; i++){
        currSum += Arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
        
    }
    cout<<"Maximum Sub Array Sum is "<<maxSum;
}
int main(){
    int Arr[] = {-2,5,-4,3,1};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    printSubArrayUsingKadans(Arr, n);
    cout<<endl;

    return 0;
}