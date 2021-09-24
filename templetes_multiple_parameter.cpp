#include<iostream>
using namespace std;

template<class T1, class T2>
class myClass{
    public:
        T1 Data1;
        T2 Data2;
        myClass(T1 a , T2 b){
            Data1= a;
            Data2 = b;

        }
        void getdata()
        {
        cout<<this ->Data1<<endl<<this ->Data2<<endl;
        }
};

   int main()
{
    myClass<int, char> obj(1, 'F');
    obj.getdata();
}


