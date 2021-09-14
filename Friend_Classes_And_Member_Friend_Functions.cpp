#include<iostream>
using namespace std;


class complex; //Forward declaration 
class calculator {
    public:
            int add(int a , int b){
                return(a+b);
            }
            int sumRealcom(complex,complex);
            int sumImgcom(complex,complex);
};




class complex {
    int a ,b;
    friend int calculator :: sumRealcom(complex,complex);  // making a specific function friend 
    friend int calculator :: sumImgcom(complex,complex);    // making a specific function friend 
    // friend class calculator;  //making an entire class as a function 
public :
    void setdata (int n1 , int n2){
        a=n1;
        b=n2;
    }
    void getdata(){
        cout<<"The Entered Complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

    
};
 int calculator :: sumRealcom(complex o1,complex o2){
       return (o1.a+o2.a);

}
int calculator :: sumImgcom(complex o1,complex o2){
        return (o1.b+o2.b);
}
   


int main(){
    complex o1,o2;
    o1.setdata(5,2);
    o2.setdata(9,5);
    
    calculator calc;
    int res = calc.sumRealcom(o1,o2);
    cout<<"real PArt : "<<res<<endl;
    int resc = calc.sumImgcom(o1,o2);
    cout<<"Img PArt : "<<resc<<endl;
       
    
 
    return 0;
}