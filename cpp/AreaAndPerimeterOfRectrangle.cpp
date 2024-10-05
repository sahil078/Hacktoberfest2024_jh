// write a program to print the area and perimeter rectrangle

#include<iostream>
using namespace std;

int main(){
    int len , wid;

    cout<<"Enter the length of rectrangle : "<<endl;
    cin>>len;
    cout<<"Enter the width of rectrangle : "<<endl;
    cin>>wid;

    int area = (len * wid);
    int perimeter = (2*(len + wid));

    cout<<"the area of rectrangle is : "<< area <<endl;
    cout<<"The perimeter of rectrangle is : "<< perimeter <<endl;

    return 0;
}