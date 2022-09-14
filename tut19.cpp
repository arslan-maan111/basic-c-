// #include <iostream>
// using namespace std;

// int sum(float a, int b){
// cout<<"Using function with 2 arguments :";
//     return a+b;
// }

// int sum(int a, int b, int c){
// cout<<"Using function with 3 arguments :";
//     return a+b+c;
// }

// Ham ne sum naam ke 2 function banaye hain or sum ko call kiya he compiler automatic--
// function ko overload karke hamain bagair error k output de de ga. yaani compiler-- 
// khud ba khud 2 values aik sum function main rakh de ga or 3 value 2sre sum function--
//rakh de ga or hamian ba-asani output mil jaye gi.This called function overloading.

// int main(){
//     cout<<"The sum of 3 and 4 is : " <<sum(3,4) <<endl;
//     cout<<"The sum of 3,4 and 5 is : " <<sum(3,4,5) <<endl;
//     return 0;
// }


// ******** One more example of Function Overloading *********

// ab ham aik hi naam (volume naam) ke 3 function banayain ge or volume naam ke function--
// ko call krke different output hasil karain ge.

#include <iostream>
using namespace std;

// Calculate the volume of a cylinder
int volume(double r, int h){
    return (3.14 * r * r *h);
}

// Cube 
int volume(int a){
    return(a * a * a);
}

// Rectangular box
int volume(int l, int w, int h){
    return(l*w*h);
}


int main(){
    
    cout<<"The volume of cylynder values (3,4) is :" <<volume(3,4)<<endl;
    cout<<"The volume of cube value (3) is :" <<volume(3)<<endl;
    cout<<"The volume of Rectangular values (3,4 and 5) is :" <<volume(3,4,5)<<endl;

    return 0;
}
