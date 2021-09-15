#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x1, y1, x2, y2;
    friend void distance(int x1, int y1, int x2, int y2); 
    
   
public:
    void getdata(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    void getdata1(int c, int d)
    {
        x2 = c;
        y2 = d;
    }
    void displaydata()
    {
        cout << "( " << x1 << " , " << y1 << " )"
             << "           ( " << x2 << " , " << y2 << " )" << endl;
    }

    void distance(int x1, int y1, int x2, int y2);
     
};
   void  point :: distance(int x1, int y1, int x2, int y2)

{
    int  res;
    res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout<< res; 
}


int main()
{
    
    point p1, p2,p3;
    p1.getdata(1, 2);
    p2.getdata1(1, 4);
    p1.displaydata();
    p2.displaydata();
    p3. distance( x1,  y1,  x2,  y2); 
     
    return 0;
}