// write a program to print the sum of all even number
#include <iostream>
using namespace std;

int main(){
    int num , sum=0;
    cout<<"Enter any number: "; 
    cin>>num;

    for(int i=1; i<=num; i++ ){
        if((i%2) == 0){
            sum = sum + i;
        }
    }
    cout<< sum <<endl;
    return 0;
}