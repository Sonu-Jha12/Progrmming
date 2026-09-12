#include<iostream>
using namespace std;

int main(){
    float Pen, Pencil, Eraser,Cost,Tax,TotalCost;

    cout<<"Enter Cost of Pen : ";
    cin>> Pen;

    cout<<"Enter Cost of Pencil : ";
    cin>> Pencil;

    cout<<"Enter Cost of Eraser : ";
    cin>> Eraser;

    Cost = Pen + Pencil + Eraser ;

    cout<<"Cost : "<<Cost<<endl;

    Tax = Cost * (18*0.01);

    cout<<"Tax : "<<Tax<<endl;

    TotalCost = Cost + Tax;

    cout<<"Total Cost : "<<TotalCost<<endl;

    return 0;

}
