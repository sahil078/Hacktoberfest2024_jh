// write a program to convert kilometer Per Hour to Miles Per Hour

#include<iostream>
using namespace  std;

int main(){
    float km, mph ;

    cout<<"Enter the Distence in Kilometer Per Hour : "<<endl;
    cin>>km;

    mph = (km / 1.609);

    cout<<"The distance converted in Miles Per Hour wil Be : "<< mph <<endl;

    return 0;
}
