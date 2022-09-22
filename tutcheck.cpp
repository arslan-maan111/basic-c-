 #include <iostream>
using namespace std;


void table()
{
    cout<<"Enter the table no : "; 
}
 
int main(){
    int a;
    int b;
    table();
    cin>>b;
for(int a=1; a<=10; a++){ 
        cout<<b <<" * " <<a <<" = " ;
        cout<<b*a <<endl;
        
    }

     return 0;
}