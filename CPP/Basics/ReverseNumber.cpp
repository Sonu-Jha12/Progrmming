#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter Number : ";
    cin>> num;

    int n = num;

    while(num > 0){
        int digit = num % 10;
        cout<<digit;
        num /= 10;
    }

    cout<<endl;

    return 0;
}