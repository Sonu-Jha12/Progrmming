#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout<<"Enter n (1 to n) : ";
    cin>> n;

    for(int i=0; i<n; i++){
        sum = sum + i;
    }

    cout<<"Sum is "<<sum<<endl;
}