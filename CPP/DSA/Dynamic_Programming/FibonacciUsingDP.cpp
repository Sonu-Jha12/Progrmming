#include<iostream>
#include<vector>
using namespace std;

int fibDp(int n, vector<int> &f){
    if(n==0 || n==1){
        return n;
    }
    if(f[n] != -1){
        return f[n];
    }
    f[n] = fibDp(n-1,f) + fibDp(n-2,f);
    return f[n];
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>> n;
    if(n < 0) {
        cout << "Please enter a non-negative number.";
        return 0;
    }
    vector<int> f(n+1,-1);

    cout<<"Fibonacci of "<<n<<" is "<<fibDp(n,f)<<endl;

    return 0;
}