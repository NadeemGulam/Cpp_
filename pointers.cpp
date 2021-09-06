#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *v;
    v=&a;
    cout<<"THe Address at "<<&a<<endl;
    cout<<"THe Address at "<<v<<endl;

    cout<<"THe Address at "<<*v<<endl;
    
    int **c =&v;
    cout<<"the address at b is  :"<<&v<<endl;
    cout<<"the value of c is :"<<**c<<endl;
    cout<<"The address at c is "<<c<<endl;
    cout<<"The address at v is "<<v<<endl;

    return 0;
}