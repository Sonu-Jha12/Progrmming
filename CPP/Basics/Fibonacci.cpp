#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1,next;
    int num;
    cout<< "Enter Number : ";
    cin>> num;

    cout<< "Fibonacci Series of "<<num<<" Number : ";

    for(int i = 1; i<= num; i++){
        cout<< a <<" ";

        next = a + b;
        a = b;
        b = next;
    }
    cout<<endl;

    return 0;
}