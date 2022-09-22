#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    

    void display()
    {
        cout << "Your Number is : " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex func1;
    func1.display();

    Complex func2(4,5);
    func2.display();

    Complex func3(5);
    func3.display();


    return 0;
}