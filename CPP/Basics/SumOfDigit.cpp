#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;

    cout<<"Enter Number : ";
    cin>> num;

    while(num > 0){
        int digit = num % 10;

        sum += digit;
        num /= 10;
    }

    cout<<"Sum of Digit in a Number is "<<sum<<endl;

    return 0;
}