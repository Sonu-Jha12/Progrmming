#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter Number of * in a line : ";
    cin>> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    
}