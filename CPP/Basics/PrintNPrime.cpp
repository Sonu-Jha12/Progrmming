#include<iostream>
using namespace std;

int main(){
    int num;

    cout<< "Enter Number : ";
    cin>> num;

    cout<< "Prime Number (2 to N) : ";

    for(int i=2; i<=num; i++){
        
        int n = i;
        bool isPrime = true;

        if(n == 2){
            isPrime = true;
        }
        else{
            for(int j=2; j<n; j++){
                if(n % j == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime)
            cout<<n<<" ";
    }

    cout<< endl;
    return 0;

}