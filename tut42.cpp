#include<iostream>
#include<cmath>
using namespace std;

class simple_calc{
    protected :
        int num1, num2;
    public:
    void operations(int a,int b )
    {
        num1=a;
        num2=b;
        cout<<"The vale after addition is :"<<a+b<<endl;   
        cout<<"The vale after multiplication is :"<<a*b<<endl;   
        cout<<"The vale after sub is :"<<a-b<<endl;   
        cout<<"The vale after division is :"<<a/b<<endl;   
        cout<<endl;
    }
};
class scientific : public simple_calc {
    protected: int a;
    public :
    void seeeeede( ){
        
        cout<<"The value of sine is :"<<sin(num1)<<" And "<<sin(num2)<<endl;
        cout<<"The value of sine is :"<<cos(num1)<<" And "<<cos(num2)<<endl;
        cout<<"The value of sine is :"<<tan(num1)<<" And "<<tan(num2)<<endl;
        
    }
};


int main(){
    // simple_calc s1;
    scientific s1,s2;
    s1.operations(5,5);
    
    s2.seeeeede();
    return 0;
}