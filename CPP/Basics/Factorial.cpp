#include<iostream>
using namespace std;

int main(){
    int num, Fact = 1;

    cout<< "Enter Number : ";
    cin>> num;

    for(int i=1; i<=num; i++){
        Fact = Fact * i ;
    }

    cout<< "Factorial of "<<num<<"! is "<<Fact<<endl;

    return 0;
}