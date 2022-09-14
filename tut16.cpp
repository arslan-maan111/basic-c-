// #include <iostream>
// using namespace std;

// ******** Call by value(using user build(swap) function) ********

// void swap(int a, int b){
// int temp=a;
//  a=b;
//  b=temp;
// }
// int main(){
//     int a=4, b=5;   // int x=4, y=5;(both give same output)
//     cout<<"The value of a is : " <<a <<" and The value of b is : "<<b <<endl; // simple print
//     swap(a,b);
//     cout<<"The value of a is : " <<a <<" and The value of b is : "<<b <<endl; // swap function call print
     
//      return 0;
// }  



// ******** Call by value(using sum function) *********
#include <iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

int main(){


    cout<<"The sum of 4 and 5 is : " <<sum(4,5 );
     return 0;
}


// ******* Call by Refernce(using c++ reference variables)(type 1)

// #include <iostream>
// using namespace std;

// void swapReferenceVar(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int x=4, y=5;
//     cout<<"The value of x is :" <<x << " and The value of y is :" <<y <<endl;
//     swapReferenceVar( x, y);
//     cout<<"The value of x is :" <<x << " and The value of y is :" <<y <<endl;

//     cout<<"The value of x is :" <<x <<" and The value of y is :" <<y <<endl;
     
//      return 0;
// }

// ***** Call by Reference (C++ reference veriables)(type 2)

// #include <iostream>
// using namespace std;

// int & swapReturnReference(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     return a;
// }

// int main(){
//     int x=4, y=5;
//     cout<<"The value of x is :" <<x << " and The value of y is :" <<y <<endl;
//     swapReturnReference( x , y)= 766;
//     cout<<"The value of x is :" <<x << " and The value of y is :" <<y <<endl;

//     cout<<"The value of x is :" <<x <<" and The value of y is :" <<y <<endl;
     
//      return 0;
// }



// #include <iostream>
// using namespace std;

// void swapPointer(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
    
// }

// int main(){
//     int x=4, y=5;
//     cout<<"The value of x is :" <<x << " and The value of y is :" <<y <<endl;
//     swapPointer( &x , &y);
//     cout<<"The value of x is :" <<x << " and The value of y is :" <<y <<endl;

//     cout<<"The value of x is :" <<x <<" and The value of y is :" <<y <<endl;
     
//      return 0;
// }