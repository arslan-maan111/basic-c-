#include <iostream>
using namespace std;
 

class c2;

class c1{
    int val1;
    
    friend void exchange(c1 & , c2 &);
    public:
    void indata1(int a){
        val1 = a;
    }

    void display1(void){
        cout<< val1  <<endl;
    }
};

class c2{
    int val2;
 
    friend void exchange(c1 &, c2 &);
    public:
    void indata2(int b){
        val2 = b;
    }

    void display2(void){
        cout<< val2 <<endl;
    }
};



void exchange(c1 &x, c2 &y){ 
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}


int main (){
    c1 oc1;
    c2 oc2;
    
  
    oc1.indata1(34);
    oc2.indata2(67);
    exchange(oc1, oc2);

    cout<<"The value of x after swapping is : " ;
    oc1.display1();
    cout <<"The value of y after swapping is : ";
    oc2.display2();

    return 0;
}