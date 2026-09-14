#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    int choice,Result;

    cout<<"Enter num1 : ";
    cin>> num1;
    cout<<"Enter num2 : ";
    cin>> num2;

    cout<<"1.Addition \n2.Substraction \n3.Multiplication \n4.Division \n";

    cout<<"Enter choice : ";
    cin>> choice;

    switch(choice){
        case 1:
            Result = num1 + num2 ;
            cout<<"Addition of "<<num1<<" + "<<num2<<" is "<<Result;
            break;
        case 2:
            Result = num1 - num2 ;
            cout<<"Substraction of "<<num1<<" - "<<num2<<" is "<<Result;
            break;
        case 3:
            Result = num1 * num2 ;
            cout<<"Multiplication of "<<num1<<" * "<<num2<<" is "<<Result;
            break;
        case 4:
            Result = num1 / num2 ;
            cout<<"Divison of "<<num1<<" / "<<num2<<" is "<<Result;
            break;
        default: 
            cout<<"Invalid Choice";
    }
    cout<<endl;
}