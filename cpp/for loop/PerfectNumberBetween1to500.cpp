// write a program to print the perfect number between 1 to 500

#include<Iostream>
using namespace std;

int main(){
    int i=1 , u=1 , sum=0;
    while(i<=500)
    {
        while(u<=500)
        {
            if(u<i)
            {
                if(i%u == 0)
                {
                    sum = sum + u;
                }
            }
            u++;
        }
        if(sum == i)
            {
                cout<< i <<" "<<endl;
            }
            i++;
            u=1;
            sum =0;
    }
    return 0;
}