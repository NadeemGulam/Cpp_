#include<iostream>
using namespace std;
class d1{
        int a ;
        public:
            int b ,c;
            void setdata();
            int getdata1();
            int getdata2();
           
};
void d1 :: setdata(){
    a = 10;
    b = 20;
}
int d1 :: getdata1(){
    return a;
}
int  d1 ::  getdata2(){
    return b;
}





class derived : public d1{
                    int c ;
                    public :
                    void process ();
                    void display();

};
void derived::process(){
    c=b * getdata1();
}
void derived::display(){
    cout<<"The value of the a is : "<<getdata1()<<endl;
    cout<<"The value of the a is : "<<b<<endl;
    cout<<"The value of the a is : "<<c<<endl;
    // cout<<"The value of the a is : "<<getadata1()<<endl;
}
int main(){
    derived a1;
    a1.setdata();
    // a1.getdata1();
    // a1.getdata2();
    a1.process();
    a1.display();
    return 0;
}