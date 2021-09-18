#include <iostream>
using namespace std;
class shop
{

    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void inti_counter(void) { counter = 0; }
    void displayPrice(void);
    void setPrice(void);
};
void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id : " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
void shop::setPrice()
{
    cout << "Enter ID of your item : " << endl;
    cin >> itemID[counter];
    cout << "Enter price of your item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}

int main()
{
    shop dukan;
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}