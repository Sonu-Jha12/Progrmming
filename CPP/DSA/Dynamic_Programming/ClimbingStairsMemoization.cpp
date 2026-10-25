#include<iostream>
#include<vector>
using namespace std;

int countWaysMem(int n, vector<int> dp){
    if(n==0 || n==1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = countWaysMem(n-1, dp) + countWaysMem(n-2, dp);

    return dp[n];
}
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>> n;
    vector<int> dp(n+1, -1);

    cout<< countWaysMem(n, dp)<<endl;

    return 0;
}