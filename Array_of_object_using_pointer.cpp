#include<iostream>
using namespace std;

class shopItem{
    int Id ;
    float price ;
    public:
        void setdata(int a, int b ){
            Id= a;
            price = b;
        }
        void getdata(){
            cout<<"The id of the item is : "<<Id<<endl;
            cout<<"The price of the item is : "<<price<<endl;
        }
};

int main(){
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrtemp = ptr ; 
    int i , p ;
    float q;
      for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setdata(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    

    return 0;
}

