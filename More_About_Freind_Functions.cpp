// // Part A`


// #include<iostream>
// using namespace std;
// class y;

// class x
// {
// int data ;
// public:
//     int adddata(int a){
//         data = a;
//     }
//     friend void add(x,y);
// };
// class y
// {
// int  num ;
// public:
//     int addnum(int b){
//          num = b;
//     }
//     friend void add(x,y);
// };
// void add(x o1, y o2){
//     cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
// }

// int main(){
//     x a1;
//     a1.adddata(3);

//     y b1;
//     b1.addnum(15);

//     add(a1, b1);
//     return 0;
// }

// Part B


#include<iostream>
using namespace std;
class c2;
class c1
{
    int val1 ;
    friend  void swap(c1 &, c2 &);
    public :
    void setdata(int a){
        val1=a;
    
    }
    void display(void){
            cout<< val1 <<endl;
        }
} ;  
class c2
{
    int val2 ;
    friend  void swap(c1 & , c2 &);
    public :
    void getdata1(int a){
        val2=a;

    }
    void display(void){
            cout<< val2 <<endl;
        }
};

void swap(c1 &x,c2 &y) {
    // cout<<"the val1 : "<<val1<<" And the second val2 is : "<<val2<<endl;
    int temp ;
    temp =x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
   
}

int main(){
    c1 o1;
    c2 o2;
    o1.setdata(12);
    o2.getdata1(123);
    
    swap(o1,o2);
    cout<<"The value of c1 after exchanging becomes: ";
    o1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    o2.display();
    
    return 0;
}