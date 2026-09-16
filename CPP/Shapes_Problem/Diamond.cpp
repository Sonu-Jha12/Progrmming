#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>> n;

    // Upper
    for(int i = 1; i <= n; i++){
        // Space
        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }
        // Star
        for(int j = 1; j <= 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower
    for(int i = n; i >= 1; i--){
        // Space
        for(int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        // Star
        for(int j = 1; j <= 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}