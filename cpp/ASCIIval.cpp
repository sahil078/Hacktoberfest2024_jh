// write a program to print the ASCII Value of a charecter

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;

    cout<<"The ASCII Value of " << ch << " is "<<(int)ch <<endl;

    cout<<"The Charecter for ASCII value "<<(int)ch <<" is "<< (char)((int)ch) <<endl;
    return 0;
}