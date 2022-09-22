#include <iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
    void setValue1(int value1){
        data = value1;
    }
    friend void add(X, Y);
};

class Y{
    int num;
    public:
    void setValue2(int value2){
        num = value2;
    }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"Summing of X and Y objects is: " <<o1.data + o2.num;
}

int main (){
    X a1;
    a1.setValue1(3);

    Y b1;
    b1.setValue2(4);

    add(a1, b1);

    return 0;
}
