#include<iostream>
using namespace std;

int sum(int a , int b); //if we wan tto write the fi-uction after the main we use this 
int sum(int ,int);  //This also acceptable 
void g(void);

int main(){
    int num1,num2;
    cout<<"Enter the first number :"<<endl;
    cin>>num1;
    cout<<"Enter the second number :"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}  

int sum(int a , int b){
    //Formal parameters a ad b will be taking values from actual parameters num1 and num2
    int c =a+b;
    return c ;
}

void g(){
    cout<<"Hello world!! "<<endl;
    
}