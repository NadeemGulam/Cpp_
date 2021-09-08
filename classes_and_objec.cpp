// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a ,b,c;
//     public :
//     int d , e;
//         void setData(int a1,int b1,int c1); 
//         void getData(){
//         cout<<"Enter the value of a :"<<a<<endl;
//         cout<<"Enter the value of b :"<<b<<endl;
//         cout<<"Enter the value of c :"<<c<<endl;
//         cout<<"Enter the value of d :"<<d<<endl;
//         cout<<"Enter the value of e :"<<e<<endl;
//         }
// };
// void Employee :: setData(int a1,int b1, int c1)
// {
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main(){
//     Employee Nadeem;
//     Nadeem.d=35;
//     Nadeem.e=67;
//     Nadeem.setData(1,2,3); 
//         Nadeem.getData();
//     return 0;
// }

// /**************************Example 2****************************/
#include<iostream>
using namespace std;
class Animals
{
    private: 
    int Age, tagId;
    public:
    string breed;
    string color;
    int population;
    
    void getinfo(int Age1,int tagId1);
    void printData(){
        cout<<"The Breed is : "<<breed<<endl;
        cout<<"The population is : "<<population<<endl;
        cout<<"The color is : "<<color<<endl;
        cout<<"The age is : "<<Age<<endl;
        cout<<"The tagId is : "<<tagId<<endl;

    }
    
};

void Animals ::  getinfo(int Age1,int tagId1)
{
    Age=Age1;
    tagId=tagId1;
}


int main(){
    Animals Tiger;
    Tiger.population = 3000;
    Tiger.breed = "indian";
    Tiger.color = "orange with black stripes";
    Tiger.getinfo(34,56);
    Tiger.printData();

    return 0;
}