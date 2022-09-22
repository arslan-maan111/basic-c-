// #include <iostream>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int, int); // Constructor declaration
//     void printNumber()
//     {
//         cout << "Your nmber is :" << a << " + " << b << "i" << endl;
//     }
// };

// complex ::complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
// }

// int main()
// {

//     // Implicit call
//     complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     complex b = complex(5, 7);
//     b.printNumber();

//     return 0;
// }

//                         ******** Example 2 *********

#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "The point is : "
             << "(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    point p(1, 1);
    p.display();

    point q(4, 6);
    q.display();

    return 0;
}
