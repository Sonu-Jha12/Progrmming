#include<iostream>
using namespace std;

int main(){
    int Income;
    float Tax;

    cout<<"Enter Income Amount (in Lakh) : ";
    cin>> Income;

    if(Income < 5){
        Tax = 0;
    }else if(Income <= 10){
        Tax = Income * 0.2;
    }else{
        Tax = Income * 0.3;
    }

    cout<<"Tax is "<<Tax*100000<<endl;

    return 0;

}