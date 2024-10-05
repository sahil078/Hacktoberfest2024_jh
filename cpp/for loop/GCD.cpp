// Greatest common divisor of two number

#include<Iostream>
using namespace std;

int main()
{
    int a , b , gcd ;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    cout<<"The greatest common divisor is : "<<gcd<<endl;
    return 0;
}