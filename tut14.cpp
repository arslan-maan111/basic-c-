#include <iostream>
using namespace std;

                                // ****** Structure ******* 


// we can declare structue value into 2 types

// *** type 1 (structure declaration) ***
    // struct employee
    // {
    // int eId;
    // char favcar;
    // float salary; 
    // };
    // we can take many things(eId,favcar,salary) of emplooye's as we need.


// *** type 2 (structure declaration) ***
//  typedef struct employee
//     {
//     int eId;
//     char favchar;
//     float salary; 
//     } ep;


// declaring employees we have 2 types

// *** type 1 is *** 
// int main(){
//     struct harry;
//     struct shubham;
//     struct rohanDas;
    // we can daclare employees as much we need 
// }


// *** type 2 is ***
// int main(){
//     ep harry;
//     ep shubham;
//     ep rohandas;
//     // we can daclare employees as much we need 



// // Now we store values into employees name
//     harry.eId= 1;
//     harry.favchar='a';
//     harry.salary= 12000;

//     shubham.eId= 2;
//     shubham.favchar= 'b';
//     shubham.salary= 500;
// // we can take much emplooyees as we need

// //  Now we will take output of the program

// cout<<"The harry eId is: " <<harry.eId <<endl;
// cout<<"The harry favchar is: " <<harry.favchar <<endl;
// cout<<"The harry salary is: " <<harry.salary <<endl;

// cout<<"The shubham eId is: " <<harry.eId <<endl;
// cout<<"The shubham favchar is : " <<harry.favchar <<endl;
// cout<<"The shubham salary  is: " <<harry.salary <<endl;

// return 0;
// }



//                              ******* Union *******


// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };

//  int main(){
//      union money m1;
//      m1.rice= 34;
//     //  m1.car= 'a';
//     //  m1.pounds= 36.6;

//      cout<<"Value of rice in rupees is:" <<m1.rice <<endl;
//      return 0;
// }



//                              ********* enum *********

int main(){
    enum meal{breakfast,lunch, dinner};
    meal m1=lunch;
    cout<<m1;
    return 0;
}