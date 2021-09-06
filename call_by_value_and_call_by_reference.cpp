#include<iostream>
using namespace std;

int sum(int a , int b)
{
    int c = a + b;
    return c;

}
void swap (int a , int b)
{
    int temp = a;
    a=b;
    b= temp;
    
}
//Call by reference using pointer 
void swapPointer(int *a, int *b)
{
    int temp =* a;
    * a=* b;
    * b=temp;

}
void swapReferenceVar(int &a , int &b)
{
    int temp = a;
     a= b;
     b=temp;
}
int main(){
    int a =4 , b =5 ;
    cout<<"sum of 4 and 5 is : "<<sum(a,b)<<endl;
    //call by referece using pointer using  reference
    // cout<<"the value of a "<<a<< " and b is "<<b<<endl;
    // swapPointer(&a,&b);
    // cout<<"the value of a "<<a<< " and b is "<<b<<endl;

    //this will swap using refence variable such as a and b
    cout<<"the value of a "<<a<< " and b is "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"the value of a "<<a<< " and b is "<<b<<endl;


    // cout<<"the value of a "<<a<< " and b is "<<b<<endl;
    // swapPointer(a,b);
    // cout<<"the value of a "<<a<< " and b is "<<b<<endl;
    // this will not swap
    
    
    return 0;
}               