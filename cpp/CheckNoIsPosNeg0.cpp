// write aprogram to check the number is Positive , negative , Zero

#include<iostream>
using namespace std;

int main(){
    int num ;

    cout<<"Enter the number : "<<endl;
    cin>>num;

    if(num == 0){
        cout<< "The Number Is ZERO"<< endl;
    }
    else if(num > 0){
        cout << " The Number Is POSITIVE" << endl;
    }
    else{
        cout <<"Number IS NEGATIVE";
    }

    return 0;
}