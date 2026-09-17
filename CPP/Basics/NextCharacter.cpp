#include<iostream>
using namespace std;

char nextChar(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else{
        return ch + 1;
    }
}

int main(){
    char ch;
    cout<<"Enter Character : ";
    cin>> ch;

    cout<<"Next Character of "<<ch<<" is : "<<nextChar(ch)<<endl;

    return 0;
}