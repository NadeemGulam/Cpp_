#include<iostream>
#include<iomanip>
using namespace std;
  typedef struct employee   //Here by using typedef we can write any specified name instead of struct.******
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;                        //The name that we can use is mentioned over here
union money   //Here by using typedef we can write any specified name instead of struct.******
{
    /* data */
    int rice;
    char car;
    float pounds ;
};                        //The name that we can use is mentioned over here

int main(){
  enum Meal{ breakfast, lunch, dinner };
  Meal m1 = lunch;
  cout<<(m1==2);
  // cout<<breakfast<<endl;
  // cout<<lunch<<endl;
  // cout<<dinner<<endl;

}
// int main()
// {
//   union money m1;
//   m1.rice = 34;
//   m1.car = 'c';
//   cout<<m1.car;
//   return 0 ;
// }





// int main(){
//     ep Nadeem;
//     struct employee Akash;
//     ep Shahi;
//     struct employee Vishwa;
//     Nadeem.eId = 1;
//     Nadeem.favChar = 'c';
//     Nadeem.salary = 12.0000000;
//     cout<<fixed<<setprecision(7)<<Nadeem.salary<<endl;
//     cout<<Nadeem.eId<<endl;
//     cout<<Nadeem.favChar<<endl;
    
    
