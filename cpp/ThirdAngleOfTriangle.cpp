// write a program to find the third angle of triangle 

#include<iostream>
using namespace std;

int main(){
    int side1 , side2 , side3;
    const int deg = 180;

    cout<<"Enter the 1st angle of triangle : "<<endl;
    cin>>side1;
    cout<<"Enter the 2nd angle of triangle : "<<endl;
    cin>>side2;

    side3 = deg - (side1 + side2) ;

    cout<<"The 3rd angle of triangle is : "<< side3 << endl;

    return 0;
}