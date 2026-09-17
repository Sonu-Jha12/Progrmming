#include<iostream>
using namespace std;

int main(){
    int num;

    cout<< "Enter Number : ";
    cin>> num;

    int n = num;
    int result = 0;

    while(num>0){
        int rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    if(result == n){
        cout<<n<<" is a Palindrome Number."<<endl;
    }
    else{
        cout<<n<<" is not a Palindrome Number."<<endl;
    }

    return 0;
}