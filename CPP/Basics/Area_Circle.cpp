#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    float radius,Area;

    cout<<"Enter Radius : ";
    cin>> radius;

    Area = PI * radius * radius ;

    cout<<"Area of Circle : "<<Area<<endl;

    return 0;
}
