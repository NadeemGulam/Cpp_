#include<iostream>
using namespace std;


class base1 {
        int data1;
    public:
         base1 (int  i){
            data1  = i;
            cout<<"Base1 class has been called "<<endl;
        }
        void printdatabase1 (void){
                cout<<"The data in base 1 is : "<<data1<<endl;
        }
};

class base2 {
        int data2;
    public:
        base2(int  i){
            data2  = i;
            cout<<"Base2 class has been called "<<endl;
        }
        void printdatabase2 (void){
                cout<<"The data in base 2 is : "<<data2<<endl;
        }
};
class derived : public base2 , public base1{
            int der1 , der2;
            public :
            derived (int a, int b, int c, int d):base1(a),base2(b){
                der1 = c;
                der2 = d;
                cout<<"The derived has been called "<<endl;
            }
             void printdataderived (void){
                cout<<"The data in derived 1 is : "<<der1<<endl;
                cout<<"The data in derived 2 is : "<<der2<<endl;
        }
};



int main(){
    derived a1(45,245,36436,44343);
    a1.printdatabase1();
    a1.printdatabase2();
    a1.printdataderived();
    return 0;
}



// #include <iostream>
// #include <algorithm>
// using namespace std;
 
// // Utility function to print contents of an array
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }
 
// // Utility function to reverse elements of an array
// void reverse(int arr[], int n) {
//     reverse(arr, arr + n);
// }
 
// int main()
// {
//     int arr[] = { 1, 2, 3, 4, 5 };
//     int n = sizeof(arr)/sizeof(arr[0]);
 
//     reverse(arr, n);
//     print(arr, n);
 
//     return 0;
// }