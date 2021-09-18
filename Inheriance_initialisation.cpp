#include<iostream>
using namespace std;

class Employee {

public:int id ;
    int salary ;

};

class Programmer : Employee {

};
int main(){
    Employee nadeem,kamal ,aditya;
    cout<<nadeem.id<<endl;
    cout<<kamal.id<<endl;
    cout<<aditya.id<<endl;
    // cout<<nadeem.id<<endl;
    return 0;
}