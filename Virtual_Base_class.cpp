// #include <iostream>
// using namespace std;

// class student
// {
// protected:
//     int roll_number;

// public:
//     void set_data(int a)
//     {
//         roll_number = a;
//     }
//     void printdataS()
//     {
//         cout << "The given roll number is :" << roll_number << endl;
//         cout << endl;
//     }
// };
// class exam :  virtual public student
// {
// protected:
//     int maths, physics;

// public:
//     void set_data1(int a, int b)
//     {
//         maths = a;
//         physics = b;
//     }
//     void printdataE()
//     {
//         cout << "The marks in Maths is  :" << maths << endl;
//         cout << "The marks in physics is  :" << physics << endl;

//         cout << endl;
//     }
// };

// class sports : virtual  public student
// {
// protected:
//     int SC;

// public:
//     void score(int a)
//     {
//         SC = a;
//     }
//     void display()
//     {
//         cout << "The marks obtained in sports is :" << SC << endl;
//         cout << endl;
//     }
// };

// class result : virtual public exam, virtual public sports
// {

//      private:
//         float total;
//     public:
//         void display(void){
//             total = maths + physics + SC;
//             printdataS();
//             printdataE();
//             display();
//             cout<< "Your total score is: "<<total<<endl;
//         }
// };
// int main()
// {
//     result harry;
//     harry.set_data(4200);
//     harry.set_data1(78.9, 99.5);
//     harry.score(9);
//     harry.display();
//     // return 0;







#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void add(int c , int d ){
    int *a=&c , *b=&d ;
     cout<<c+d<<endl;
     cout<<c-d;
     
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int c , d;
     cin>>c>>d;
    add(c,d);
   

    return 0;
}
