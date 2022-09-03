#include <iostream>
using namespace std;

int main(){
//******* Pointers *******
//What is a pointer?-> Data type which holds the address of other data types
     int a=3;
     int*b;
     b= &a;

// &---->(value at) Operators
     cout<<"The adress of a is :" <<&a <<endl;
     cout<<"The adress of a is :" <<b <<endl;

// *----> (value at) Derefrence Operators
     cout<<"The value of a is:" <<a <<endl;
     cout<<"The value of a is:" <<*b <<endl;


//****** Pointer to Pointer ******
     int**c;
     c= &b;

// &----> adress of pointer operator
cout<<"The adress of b is :" <<&b <<endl;
cout<<"The adress of b is :" <<c <<endl;

// *----> (value at) derefrence pointer Operator
     cout<<"The adress of a stored in (pointer) b is :" <<*c <<endl;
     cout<<"The adress of a stored in (pointer) b is :" <<**c <<endl;
     

     return 0;
}