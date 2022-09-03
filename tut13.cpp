// #include <iostream>
// using namespace std;

// int main(){

// ***** Arrays *****
// *** We can declare arrays value in 3 ways ***

// * 1st Type * (we tell arrays to store 4 values)
    // int marks[4]={23,45,56,89};

// * 2nd Type * (arrays are smart it consider no of values automatically)
// preferable type(by Harry and Arslan Arshad)
    // int marks[]={23,45,56,89};

// * 3rd Type * (write every value, its take too much time, its no preferbale)
    // int marks[4];
    // marks[0]=23;
    // marks[1]=45;
    // marks[2]=56;
    // marks[3]=89;

// * Now we take Output of the Array(using any one of(1,2,3 Type) Type
    // int marks[]={23,45,56,89};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;


// ****** We can change the value of any Array ******
// ** Example **
    // int marks[]={23,45,56,89};

// * We want to change the value of no 2 which is at no 3 according to program.
//     int marks[]={23,45,56,89};
//     marks[2]=567;

//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

//      return 0;
// }



// *** Now We print the Arrays value using the Loops *******

// ***** Arrays value print using: For Loop *****
// #include <iostream>
// using namespace std;

// int main(){
//     int marks[]={23,45,56,89};
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<"The value of marks is " <<i <<" is " <<marks[i] <<endl;
//     }
    
//      return 0;
// }



// ***** Arrays value print using: While Loop *****

// #include <iostream>
// using namespace std;

// int main(){
//     int marks[]={23,45,56,89};
//     int i=0;
//     while(i<4)
//     {
//         cout<<"The value of marks is " <<i <<" is " <<marks[i] <<endl;
//         i++;
//     }
    
//      return 0;
// }



// ***** Arrays value print using: Do-While Loop *****

// #include <iostream>
// using namespace std;

// int main(){
//     int marks[]={23,45,56,89};
//     int i=0;
//     do
//     {
//         cout<<"The value of marks is " <<i <<" is " <<marks[i] <<endl;
//         i++;
//     }
//       while(i<4);
//      return 0;
// }



// ******* Poiners and Arrays *******

#include <iostream>
using namespace std;

int main(){

    int marks[]={23,45,56,89};
    int* p = marks;

    // we can print pointers value in arrays using 2 methods

// *** Method 1 ***** (It prints all the values)
    // cout<<"The value of *p is " <<*p <<endl;
    // cout<<"The value of *(p+1) is " <<*(p+1) <<endl;
    // cout<<"The value of *(p+2) is " <<*(p+2) <<endl;
    // cout<<"The value of *(p+3) is " <<*(p+3) <<endl;


// ***** Method 2 ***** (it prints 1st and 3rd value due to increment operator(++))
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

     return 0;
}