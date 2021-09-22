#include<iostream>
using namespace std;

class complex{
    int a, b ;
    public :
    
    void setdata(int x , int y ){
        a = x ;
        b = y ;

    } void getdata ()
    {
        cout<<"the complex number is a : "<<a <<endl;
        cout<<"the second complex number is : "<<b <<endl;
    }
};
int main(){
    complex c1;
    complex *ptr = new complex;
    // (*ptr).setdata(4,6); Normal method 
    // (*ptr).getdata();
    ptr ->setdata(7,6);
    ptr-> getdata();

    return 0;
}