// There are two types of header files:
// 1. System header files: It comes with the compiler

#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory


using namespace std;

int main(){
    int a=4, b=5;

    cout<<"Types of operators in cpp" <<endl;
    cout<<"Following are the types of operators"<<endl;

    // cout<<"Arithmetic operators"<<endl;
    cout<<"\nThe value of a+b is :" <<a+b <<endl;
    cout<<"The value of a-b is :" <<a-b <<endl;
    cout<<"The value of a*b is :" <<a*b <<endl;
    cout<<"The value of a/b is :" <<a/b <<endl;
    cout<<"The value of a%b is :" <<a%b <<endl;
    cout<<"The value of a++ is :" <<a++ <<endl;
    cout<<"The value of a-- is :" <<a-- <<endl;
    cout<<"The value of ++a is :" <<++a <<endl;
    cout<<"The value of --a is :" <<--a <<endl;
   
//    cout<<"Assignment Operators"<<endl;
//    Assignment Operators are used to assigning values to veribles. For example int a=10,b=15
    // char ='d' etc


// cout<<"Comparison Operators" <<endl;
cout<<"\nThe value of (a==b)is: " <<(a==b) <<endl;
cout<<"The value of (a!=b) is: " <<(a!=b) <<endl;
cout<<"The value of (a>=b) is:  " <<(a>=b) <<endl;
cout<<"The value of (a<=b) is: " <<(a<=b) <<endl;
cout<<"The value of (a>b) is:  " <<(a>b) <<endl;
cout<<"The value of (a<b) is:  " <<(a<b) <<endl;

// cout<<"Logical Operators" <<endl;
cout<<"\nThe value of this logical and operator ((a==b) && (a<b))is : " <<((a==b) && (a<b)) <<endl;
cout<<"The value of this logical or operator ((a==b) || (a<b)) is :" <<((a==b) || (a<b)) <<endl;
cout<<"The value of this logical not operator (!(a==b)) is : " <<(!(a==b)) <<endl;


    return 0;
    
}