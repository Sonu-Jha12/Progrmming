#include<iostream>
using namespace std;

void binToDec(int num){
    int n = num;
    int decNum = 0;
    int pow = 1;
    
    while(num>0){
        int lastDig = num % 10;
        decNum = decNum + pow * lastDig;
        pow = pow * 2;
        num = num / 10;
    }
    cout<< "Decimal of "<<n<<" is "<<decNum<<endl;
}

int main(){
    int n;
    cout<<"Enter Binary Number : ";
    cin>> n;

    binToDec(n);

    return 0;
}