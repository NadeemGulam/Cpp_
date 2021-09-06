#include<iostream>
using namespace std;

// inline int product(int a,int b){
//    static int c = 0; //This line will only be executed once
//    c = c+ 1;          
//    return  a * b + c;


// } 
float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;

}

int main(){
    int a,b ;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyreceived(money, 1.10)<<" Rs after 1 year"<<endl;








    // int a,b;
    // cout<<"Enter the value of a and b :"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    // cout<<"The product of a and b :"<<product(a,b)<<endl;
    return 0;
}