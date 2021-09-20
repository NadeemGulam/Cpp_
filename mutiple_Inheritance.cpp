#include<iostream>
using namespace std;


class base_1{
    protected:
        int base1;
    public:
        void set_value1(int a){
            base1 = a;

        }
};
class base_2{
    protected:
        int base2;
    public:
        void set_value2(int a){
            base2 = a;

        }
};
class derived : public base_1,public base_2{
    public:
    void show(){
            cout<<"The vale of base class 1 is :"<<base1<<endl;
            cout<<"The vale of base class 2 is :"<<base2<<endl;
            cout<<"The vale sum  is :"<<base1 + base2<<endl;
    }
};
int main(){
    derived nadeem;
    nadeem.set_value1(79);
    nadeem.set_value2(1);
    nadeem.show();
    return 0;
}