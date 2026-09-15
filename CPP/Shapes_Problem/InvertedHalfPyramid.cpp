#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>> n;

    for(int i=1; i<=n; i++){
        // Space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        // left
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}