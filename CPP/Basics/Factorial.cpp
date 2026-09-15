#include<iostream>
using namespace std;

int main(){
    int num, Fact = 1;

    cout<< "Enter Number : ";
    cin>> num;

    if(num<0){
        cout<< "Factorial of "<<num<<"! is not Possible."<<endl;
    }
    else if(num==0){
        cout<< "Factorial of "<<num<<"! is 0"<<endl;
    }
    else{
        for(int i=1; i<=num; i++){
            Fact = Fact * i ;
        }

        cout<< "Factorial of "<<num<<"! is "<<Fact<<endl;
    }

    return 0;
}