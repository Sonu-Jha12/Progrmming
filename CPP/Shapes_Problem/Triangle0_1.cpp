#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n : ";
    cin>> n;

    bool isNum = true;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){

            cout<<isNum;
            
            isNum = !isNum;
        }
        cout<<endl;
    }

    return 0;
}