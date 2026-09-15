#include<iostream>
using namespace std;

int main(){
    int num,res=0;

    cout<< "Enter Number : ";
    cin>> num;

    int n = num;

    while(num>0){
        int digit = num % 10;
        res += digit * digit * digit;
        num /= 10;
    }
    if(n == res){
        cout<<n<<" is Armstrong Number "<<endl;
    }
    else{
        cout<<n<<" is not Armstrong Number "<<endl;
    }

    return 0;
}