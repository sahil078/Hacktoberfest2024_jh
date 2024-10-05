// write a program to find the area of triangle using Heron's formula  

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float side1 , side2 , side3 , area , semiperimeter;

    cout<<"Enter the first side of triangle : "<<endl;
    cin>>side1;
    cout<<"Enter the second side of triangle : "<<endl;
    cin>>side2;
    cout<<"Enter the third side of triangle : "<<endl;
    cin>>side3;

    semiperimeter = (side1+side2+side3)/2;

    area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));

    cout<<"The area of triangle using Heron's formula is : "<<area<<endl;

    return 0;
}