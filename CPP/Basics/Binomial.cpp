#include<iostream>
using namespace std;

int Fact(int n){

    int fact = 1;

    if(n == 0){
        return 1;
    }

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int BinomialCoefficient(int n, int r){
    int result;

    result = Fact(n)/(Fact(r)*Fact(n-r));

    return result;
}

int main(){
    int n, r;

    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    cout<<"Binomial Coefficient of (n , r) is "<<BinomialCoefficient(n,r)<<endl;

    return 0;
}