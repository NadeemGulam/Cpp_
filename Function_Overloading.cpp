#include<iostream>
using namespace std;
int add(int a, int b){
    cout<<"using function with two arguements"<<endl;
    return a+b;
}
int add (int a ,int b,int c){
     cout<<"using function with three arguements"<<endl;
    return a+b+c;
}

int volume(double r , int h){ //cyclinder
    return (3.142 * r * r * h);
}
int volume(int a ){ //cube
    return a*a*a;
}

int volume(int l , int b , int h)
{
    return l*h*b;

}

 
int main(){ 
    
    cout<<"the volube of  cylinder  :"<<volume(3,6)<<endl;
    cout<<"the volube of  cuboid  :"<<volume(3)<<endl;
    cout<<"the volube of  rectangle  :"<<volume(3,6,7)<<endl;
    

    return 0;
}