/*
A school has following rule for grading systems.
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A 
Ask user to enter the marks and print the corresponding grade
*/


#include <iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the Mark you Obtained: ";
    cin>>n;

    if(n <= 25){
        cout<<"Your Grade is : F";
    }
    else if (n > 25 && n <= 44)
    {
        cout<<"Your Grade is : E";
    }
    else if(n >= 45 && n <= 49){
        cout<<"Your Grade is : D";
    }
    else if(n >= 50 && n <= 59){
        cout<<"Your Grade is : C";
    }
    else if(n >= 60 && n <=79){
        cout<<"Your Grade is : B";
    }
    else if(n >= 80 && n <=100){
        cout<<"Your Grade is : A";
    }
    else{
        cout<<"Enter the positive number";
    }

    return 0;
    
}