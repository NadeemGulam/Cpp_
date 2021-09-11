#include <iostream>
using namespace std;
class Employee
{
    int empId;
    static int count; //it will be thier for the every object

    /**********************Here is "count" is the static data member for the class Employee****************************/
public:
    
 void getdata()
{
    cout << "Enter th employee Id :" << endl;
    cin >> empId;
    count++;
}

void displaydata()
{
    cout << "The Employee Id is : " << empId << " bearing the number " << count << endl;
}
static void get_count(void){
    cout<<"The count for the given employee : "<<count <<endl;
}   
}; 
int Employee::count=1000;

 
int main()
{
    Employee Nadeem, Harry, Babbar;
    Nadeem.getdata();
    Nadeem.displaydata();
    Employee::get_count();
    Harry.getdata();
    Harry.displaydata();
    Employee::get_count();
    Babbar.getdata();
    Babbar.displaydata();
    Employee::get_count();

    return 0;
}