#include<iostream>
using namespace std;

int main(){
    int marks [4] = {23, 45, 56, 89 };
    // int  mathmarks[5] ;
    // mathmarks[0] = 78;
    // mathmarks[1] = 45;
    // mathmarks[2] = 35;
    // mathmarks[3] = 98;
    // mathmarks[4] = 67;
    // cout<<"These are mathmarks :"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;
    // cout<<"these are the marks"<<endl;

// Accessing array elements using for loop

    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<marks[i]<<endl;
    // }
    
// \********************************************************\
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
// Array value upadation
    // marks[2]=34; 
   // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // return 0;

    // Acesssing array element using while loop and do while loop
    // int i =0;
    // do{
    //     cout<<"the marks of students are : "<<marks[i]<<endl;
    //     i++;



    // }while ( i <= 3 );

    // ***************************************************************
    // pointers And Arrays
    int* p = marks;
    cout<<"The value of marks[0] : "<<p<<endl;
    cout<<"The value of marks[0] : "<<*p<<endl;
    cout<<"The value of marks[1] : "<<p<<endl;
    cout<<"The value of marks[1] : "<<*p<<endl;
    cout<<"The value of marks[2] : "<<p<<endl;
    cout<<"The value of marks[2] : "<<*p<<endl;
    cout<<"The value of marks[3 : "<<p<<endl;
    cout<<"The value of marks[3] : "<<*p<<endl;
    cout<<"The value of marks[4] : "<<p<<endl;
    cout<<"The value of marks[4] : "<<*p<<endl;
    return 0;


}