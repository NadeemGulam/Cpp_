#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if ( n <2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
    int a;
    cout<<"Enter the number of terms required  :  "<<endl;

    cin>>a;
    
    cout<<"The Fibonacci series is : "<<fibonacci(a)<<endl;

    
    return 0;
}  