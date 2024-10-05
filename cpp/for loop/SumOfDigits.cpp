// write a c++ rpogram to print the sum of digits

#include<iostream>
using namespace std;

int main(){
    int num1 , num2, dig, sum=0;

    cout<<"Input the number: ";
    cin>>num1;

    num2 = num1;
    while(num1>0){
        dig = num1 % 10; 
        num1 = num1 / 10;
        sum = sum + dig;
    }
    cout<<"The sum of digits is : "<< sum <<endl;
}