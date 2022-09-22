#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary; // extra concept
    public:
   // extra concept

    void setdata(void){
         salary = 1200; 
        cout<<"Enter the Id of employee: " <<endl;
        cin>>id;
    }

    void getdata(void){
        cout<<"The employee id is " <<id <<endl;
    }
    
};

int main(){
    Employee fb[4];
    for(int i=0; i<4; i++){
        fb[i].setdata();
        fb[i].getdata();
    }
    return 0;
}
