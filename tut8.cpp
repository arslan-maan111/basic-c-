#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
// ***** Constants Concept *****

// int a=34;
//  a=45;
// cout<<"The value of a is : " <<a;

// ***constants declaration***

// const a=3;
//  a=4;               //it gives error because now value of a cannot change(because i use const a, 
//                     //it mean never change the value of a)
//  cout<<"The value of a is : " <<a;


// ******* Manipulators *******

// int a=3, b=78, c=1233;

// cout<<"The value of a  without setw is : " <<a <<endl;
// cout<<"The value of b  without setw is : " <<b <<endl;
// cout<<"The value of c  without setw is : " <<c <<endl;

// cout<<"The value of a  with setw is : " <<setw(4) <<a <<endl;
// cout<<"The value of b  with setw is : " <<setw(4) <<b <<endl;
// cout<<"The value of c  with setw is : " <<setw(4) <<c <<endl;



// ******* Operator Precidence *******
 
int a=3, b=4;
// int c=(a*5)+b;
int c=((((a*5)+b)-45)+87);
cout<<c; 

return 0;
}