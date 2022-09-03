#include <iostream>
using namespace std;
int glob=6;
void sum(){
    int global;
    cout<<"The value of global varable is " <<glob;
}
int main(){
    int glob=78;
    int a=14,b=15;
    float pi=3.14;
    char c= 'd';
    bool B = false;  
    sum() ;
    cout<<"\nThe value of local verable is "<<glob;
     cout<<"\n The value of a is " <<a;
     cout<<"\n The value of b is " <<b;
     cout<<"\n The value of pi is " <<pi;
     cout<<"\n The value of c is " <<c;
    cout<<"\n The value of boolean is " <<B;
    return 0;
}