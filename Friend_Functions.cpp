#include<iostream>
using namespace std;
class complex{
    int a ;
    int b ;
    friend complex sumofnumber(complex o1, complex o2);
    public:
        void getdata(int n1,int n2){
        a=n1;
        b=n2;
    }

    void printnumber(){
        cout<<"The complex number is "<< a <<" + "<< b <<"i"<<endl;
    }
        
    };
complex sumofnumber(complex o1, complex o2){
        complex o3;
        o3.getdata((o1.a + o2.a), (o1.b + o2.b)) ;
        return o3;
}

int main(){
    complex c1,c2,sum;
    c1.getdata(3,2);
    c1.printnumber();

    c2.getdata(4,6);
    c1.printnumber();
    
    sum = sumofnumber(c1,c2);
    sum.printnumber();

    return 0;
}