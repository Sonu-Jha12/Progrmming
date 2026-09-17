#include<iostream>
using namespace std;

void DecToBin(int num){
    int n = num;
    int binNum = 0;
    int pow = 1;
    
    while(num>0){
        int lastDig = num % 2;
        binNum = binNum + pow * lastDig;
        pow = pow * 10;
        num = num / 2;
    }
    cout<< "Binary of "<<n<<" is "<<binNum<<endl;
}

int main(){
    int n;
    cout<<"Enter Decimal Number : ";
    cin>> n;

    DecToBin(n);

    return 0;
}