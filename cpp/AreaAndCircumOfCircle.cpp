// write a program to calculate the area and curcumference of a circle

#include<iostream>
using namespace std;

int main(){
    float radius, area , circum;
    const float pi = 3.14;

    cout<<"Enter the radius of circle : "<<endl;
    cin>>radius;

    area = (pi*radius*radius);

    circum = (2*pi*radius);

    cout<<"The are of circle is : "<<area<<endl;
    cout<<"the circumference of circle is : "<<circum<<endl;

    return 0;
}
