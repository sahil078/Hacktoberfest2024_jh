// write a program that check whether primitive values cross the limit. check whether the primitive values crossing the limits or not...........

#include<iostream>
using namespace std;

int main(){
    char gender = 'F';  //char is single-quoted
    bool isEmployed = true; //true-(non-zero) or false(0)
    unsigned short numOfsons = 2; //[0 , 225]
    short yearOfAppt = 2009; //[-327 , 327]
    unsigned int YearlyPackage= 1500000;  //[0 , 4294]
    double height = 79.48;   //with fractional part
    float gpa = 4.69f;   //need suffix 'f' for float
    long totalDrawn = 12047235L;
    long long balance = 995324987LL;


    cout<<"The gender is : "<<gender<<endl;
    cout<<"Is she married : "<<isEmployed<<endl;
    cout<<"Number of son she has : "<<numOfsons<<endl;
    cout<<"Year of her appointment : "<<yearOfAppt<<endl;
    cout<<"salary for a year : "<<YearlyPackage<<endl;
    cout<<"Height is : "<<height<<endl;
    cout<<"GPA is: " <<gpa<<endl;
    cout<<"Salary drawn UPto : "<<totalDrawn<<endl;
    cout<<"Balance till : "<<balance<<endl;

    return 0;
}
