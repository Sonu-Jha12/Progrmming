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
        // Left
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        // Right
        for(int j = 2; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower
    for(int i = 1; i <= n; i++){
        // Space
        for(int j = 1; j < i; j++){
            cout<<" ";
        }
        // Left
        for(int j = n; j >= i; j--){
            cout<<"*";
        }
        // Right
        for(int j = n; j > i; j--){
            cout<<"*";
        }
        cout<<endl;
    }

}