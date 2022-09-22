#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void)
    {
        a = 10;
        b = 20;
    }

    void printNumber()
    {
        cout << "Your Number is : " << a << " + " << b << "i";
    }
};

int main()
{
    complex c;
    c.printNumber();

    return 0;
}