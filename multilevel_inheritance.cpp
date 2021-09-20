#include<iostream>
using namespace std;

class student {
    protected:
    int roll_number;
    public :
    void setdata(int r);
    void getdata();

};
void student::setdata(int r){
         roll_number = r;
}
void student::getdata(){
        cout<< roll_number <<endl;
}
class exam : public student
{
    protected:
    float physics , maths ;
    public:
    void marksset (float  ,float );
    void marksget ();
    
    
};
void exam:: marksset (float m1, float m2 ){
    m1 = maths ;
     m2=physics  ;
}
void exam :: marksget(){
    cout<<"the marks you got in maths :"<<maths<<" And the marks in physics is : "<<physics<<endl;
}
class Result : public exam
{
    float percentage;

public:
    void display_results()
    {
        getdata();
        marksget();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};



int main()
{
    Result harry;
    harry.setdata(420);
    harry.marksset(94.0, 90.0);
    harry.display_results();
    return 0;
}
