#include<iostream>
using namespace std;


class A{
    public:
    void say(){
        cout<<"Hello World!"<<endl;
    }
};
class B{
    public:
    void say(){
        cout<<"Hello World!  MMMMMMMMMMMMMMMM"<<endl;
    }
};

class  C : public A ,public B{
    public:
    void ambi(){
        B ::say();
    }
    
    
};

int main(){
    // A a;
    // B b;
    // a.say();
    // b.say();

    C c;
    c.ambi();

    return 0;
}