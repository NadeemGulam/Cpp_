#include<iostream>
using namespace std;
class Employee
{
    int salary ;
    int id;
public:
        void setId(void){
            cout<<"Enter the employee Id : "<<endl;
            cin>>id;

        }
        void getId(void){
            cout<<" the employee Id is  : "<<id<<endl;
            

        }
}; 
int main(){
    Employee Fb[4];
    for (int i = 0; i < 4; i++)
    {
        Fb[i].setId();
        Fb[i].getId();
    }
    
    
    

    return 0;
}

