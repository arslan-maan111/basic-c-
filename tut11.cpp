// #include <iostream>
// using namespace std;

// int main(){
//     int i;
//      for ( i = 0; i <=10; i++)
//      {
//         cout<<i <<endl;
//         if(i==2) 
//         {
//             break;
//         }
//      }
     
//      return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int i;
     for ( i = 0; i <=10; i++)
     {
        
        if(i==2) 
        {
            continue;
        }
        cout<<i <<endl;
     }
     
     return 0;
}