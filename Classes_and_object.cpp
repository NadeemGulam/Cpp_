#include<iostream>
#include<string>
using namespace std;
class  binary
{
string s;
public:
     void read(void);
     void chk_binary(void);
     void ones_compliment(void);
     void display(void);

};

void binary ::read(void)
{
    cout<<"Enter the Binary Number : "<<endl;
    cin>>s;
}
void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1') {

            cout<<"Invalid binary number "<<endl;
            exit(0);
        }
    }

}
    

void binary :: display(void){
    for (int i = 0; i < s.length(); i++)

    {
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary ::ones_compliment()
{   chk_binary();  //Nesting of member Functions 
    for (int i = 0; i < s.length(); i++)

  

{   
    if(s.at(i) == '0'){
        s.at(i)='1';
    }
    else{
        s.at(i)='0';
    }
}
}
int main(){
    binary number;
    number.read();
    number.display();
    // number.chk_binary();
   number. ones_compliment();
    number.display();

    
    return 0;
}