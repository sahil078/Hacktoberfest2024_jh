// write a program to calculate the volumn of a cube

#include<iostream>
using namespace std;

int main(){
    int side , volcube;

    cout<<"ENter the side of a cube : "<<endl;
    cin>>side;

    volcube = (side*side*side);

    cout<<"The volume of a cube is : "<<volcube<<endl;

    return 0;
}