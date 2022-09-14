                            // ******** Inline ***********

// #include <iostream>
// using namespace std;
// inline int product(int a, int b){
//     return a*b;
// }

// int main(){
//     int a, b;
//     cout<<"Enter The value of a and b:"<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;
//     cout<<"The product of a and b is : " <<product(a,b) <<endl;

//     return 0;
// }


// ******** Default Arguments and Actual Arguments *********
// #include <iostream>
// using namespace std;

// float MoneyReceived(int currentMoney, float factor=1.04){
// return currentMoney * factor;
// }

// int main(){
//     int money=100000;
//     cout<<"If you have " << money <<" Rs in your bank account, You will receive " <<MoneyReceived(money)<<" after 1 year" << endl;
//     cout<<"For VIP: If you have " << money <<" Rs in your bank account, You will receive " <<MoneyReceived(money,1.1)<<" after 1 year" << endl;
// return 0;
// }



// ******** Static Variable *********

#include <iostream>
using namespace std;

int product(int a, int b){
static int c = 0;
c = c+1;
return a*b+c;
}

int main(){
    int a, b;
    cout<<"Enter The value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;
    cout<<"The product of a and b is : " <<product(a,b) <<endl;

    return 0;
}