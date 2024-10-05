// wirte a program to check the number is prime or not

#include<iostream>
using namespace std;

int main(){
    int num1 , chk=0;

    cout<<"Enter the number :";
    cin>>num1;

    for(int i=1; i<=num1; i++){
        if(num1 % i == 0){
            chk++;
        }
    }
    if(chk == 2){
        cout<<" the entered number is prime ";
    }
    else{
        cout<<"this is no prime number";
    }
    return 0;
}