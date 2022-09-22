#include <iostream>
using namespace std;
 

class c2;

class c1{
    int num1;
      friend void sum(c1 a1, c2 b1);
    
    public:
    void value1(int value1){
        num1 = value1;
    }
};

class c2{
    int num2;
    friend void sum(c1 a1, c2 b1);
    
    public:
    void value2(int value2){
        num2 = value2;
    }
};


void sum(c1 a1, c2 b1){
    cout <<"The sum is : " <<a1.num1 + b1.num2;
}


int main (){
    c1 x;
    x.value1(10);

    c2 y;
    y.value2(20);

 sum(x , y);

    return 0;
}