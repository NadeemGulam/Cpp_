#include <iostream>
#include <cmath>
using namespace std;

class point
{
   
    int x1, y1, x2, y2;
    friend double distance(int , int , int , int ); 
    
   
public:
int a,  b, c,  d;
    void setdata()
    {
        x1 = a;
        y1 = b;
         x2 = c;
        y2 = d;
    }
    
    void displaydata()
    {
        cout << "( " << x1 << " , " << y1 << " )"
             << "           ( " << x2 << " , " << y2 << " )" << endl;
    }

    double distance(int a, int b, int c, int d );
     
};
   void  point :: distance (int a, int b, int c, int d)

{
    int  res;
    res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout<< res; 
}


int main()
{
    
    point p1, p2,p3;
    p1.setdata();
    
    p1.displaydata();
    // p1.displaydata();
    // p1. distance( x1, y1, x2,  y2); //int x1, int y1, int x2, 0 int y2
     
    return 0;
}