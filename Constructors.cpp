#include<iostream>
using namespace std;
class complex {
    int a, b;
    public:
        complex(void );
        void printdata(void ){
            cout<<"The Complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

}; 
complex::complex(void){
            a=5;
            b=125458;
        }
int main(){
    complex c;
    c.printdata();

    return 0;
}