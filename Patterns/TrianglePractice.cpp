                /*
                *
                **
                ***
                ****
                */

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter the number of  terms: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


                /*
                1
                12
                123
                1234
                */

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter the number of rows: ";
//     cin>>n;

//     for(int i=1 ; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;

//         }
//         cout<<endl;
//     }
//     return 0;
// }


                /*
                1 
                22
                333
                4444
                55555
                */

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter the no of rows: ";
//     cin>>n; 

//     for(int i=1; i<=n; i++){
//         for(int j =1 ; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


                    /*
                    1
                    2 3
                    4 5 6
                    7 8 9 10
                    */

// #include<iostream>
// using namespace std;

// int main(){
//     int n , count=1; 
//     cout<<"Enter the no. of terms: ";
//     cin>>n;

//     for(int i =1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

                
                /*
                       1
                      2 3
                     4 5 6
                    7 8 9 10   
                */


// #include<iostream>
// using namespace std;

// int main(){
//     int n , count=1  ,spc;
//     cout<<"Enter the no. of terms: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){

//         // for spacing
//         spc = n-i+1;
//         for (int k=spc; k>=1 ; k--){
//             cout << " ";
//         }

//         // for printing number
//         for(int j=1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }


/*
        *
       * *
      * * *
     * * * *
*/


// #include <iostream> 
// using namespace std;

// int main(){
//     int n ; 
//     cout<<"Enter the no. of row: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){

//         //for space
//         int space = n-i+1;
//         for(int k=space; k>=1; k--){
//             cout <<" ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
      1
     2 2
    3 3 3
   4 4 4 4   
 */


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no. of rows: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){

//         // for spacing
//         int space = n-i+1; 
//         for(int k=space; k>=1; k--){
//             cout<<" ";
//         }

//         // for printing the number
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*
      *
     ***  
    *****
   *******  
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter the number of rows: ";
//     cin>>n;

//     for(int i=0; i<=n; i++){

//         //for spacing
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         } 

//         // for printing the star
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


                /*
                1
                01
                101
                0101
                10101
                */

// #include<iostream>
// using namespace std;

// int main(){
//     int n , a , b; 
//     cout<<"Enter the no. of rows";
//     cin>>n;

//     for(int i=1; i<=n; i++){

//             if(i%2 == 0){
//                 a=1 ;
//                 b=0;
//             }
//             else{
//                 a=0 ;
//                 b=1;
//             }

//         for(int j=1; j<=i; j++){
//             if(j%2 == 0){
//                 cout<<a;
//             }
//             else{
//                 cout<<b;
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;

// }