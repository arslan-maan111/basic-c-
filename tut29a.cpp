#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
// Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    complex (void);     // Constructor declaration

    void printNumber()
    {
        cout << "Your Number is : " << a << " + " << b << "i" <<endl;
        // cout<<"Hello world" << endl;
    }
};

complex :: complex(void)    // ----> This is a default constructor as it takes no parameters
    {
        a = 10;
        b = 20;
        // cout<<"Hello world" <<endl;
    }

int main()
{
    complex c;
    c.printNumber();
    c.printNumber();
    c.printNumber();

    return 0;
}