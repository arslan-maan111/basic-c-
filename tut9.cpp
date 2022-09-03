#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age: " <<endl;
    cin>>age;


    // *** Selection Control Structure: If, else if, else. ladder
    // if((age<18) && (age>0))
    // {
    //     cout<<"You cannot come to my party" <<endl;
    // }

    // else if(age==18)
    // {
    //     cout<<"You are a kid and you will get a kid pass";
    // }

    // else if(age<1)
    // {
    //     cout<<"You are not born yet";
    // }

    // else 
    // {
    //     cout<<"You can come to my party";
    // }




switch(age)
{
    case 18:
    cout<<"You are good";
    break;

    case 20: 
    cout<<"You are excellent";
    break;

    case 22:
    cout<<"You are super";
    break;
    
    default:
    cout<<"You are normal" ;
}


    return 0;
}

