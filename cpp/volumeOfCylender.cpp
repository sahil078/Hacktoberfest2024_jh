// write a program to print the column of a cylinder

#include<iostream>
using namespace std;

int main(){
    float radius , height;
    const double pi = 3.14;
    double volmcyl;

    cout<<"Enter the radius of cylinder : "<<endl;
    cin>>radius;

    cout<<"Enter the height of cylinder : "<<endl;
    cin>>height;

    volmcyl  = (pi*radius*radius*height);

    cout<<"The volumn of cylinder is : "<<volmcyl<<endl;

    return 0;
}