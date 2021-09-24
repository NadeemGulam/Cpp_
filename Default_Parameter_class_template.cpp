#include<iostream>
using namespace std;
template<class T1= int , class T2= char , class T3 = float>

class Nadeem {
    public:
        T1 a;
        T2 b;
        T3 c;
        Nadeem(int x, int y , int z ){
            a= x;
            b= y;
            c= z;

        }
        void getdata(){
            cout<<"the value in a is "<<a<<endl;
            cout<<"the value in b is "<<b<<endl;
            cout<<"the value in c is "<<c<<endl;

            cout<<endl;
            cout<<endl;
            cout<<endl;
        }
};
int main(){
    Nadeem <>obj(23,'G',4.567);
    obj.getdata();

    Nadeem <float , int , char>obj1(5.54456,45,'Nadeem');
    obj1.getdata();

    return 0;
}