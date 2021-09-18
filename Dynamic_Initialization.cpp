// #include <iostream>
// using namespace std;
// class bankdeposite
// {
//     int principle;
//     int years;
//     float returnvalue;
//     float interestrate;
//     public : 
//     bankdeposite() {}
//     bankdeposite(int p, int y, float r)
//     {

//         principle = p;
//         years = y;
//         interestrate = r;
//         returnvalue = principle;
//         for (int i = 0; i < y; i++)
//         {
//             returnvalue = returnvalue * (i + 1);
//         }
//     }
//     bankdeposite(int p, int y, int r)
//     {

//         principle = p;
//         years = y;
//         interestrate = float(r) / 100;
//         returnvalue = principle;
//         for (int i = 0; i < y; i++)
//         {
//             returnvalue = returnvalue * (i + 1);
//         }
//     }

//     void bankdeposite ::show()
//     {
//         cout << endl
//              << "Principal amount was " << principle
//              << ". Return value after " << years
//              << " years is " << returnvalue << endl;
//     }
// };

// int main()
// {
//     bankdeposite bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;

//     cout << "Enter the value of p y and r" << endl;
//     cin >> p >> y >> r;
//     bd1 = bankdeposite(p, y, r);
//     bd1.show();

//     cout << "Enter the value of p y and R" << endl;
//     cin >> p >> y >> R;
//     bd2 = bankdeposite(p, y, R);
//     bd2.show();
//     return 0;
// }   


// #include<iostream>
// #include<string>
// using namespace std;

// class binary
// {
//     string s;

//     public :

//     void read(void);
//     void chk(void);
   
// };
// void binary :: read(void)
// {
// cout<< "Enter a binary number"<<endl;
// cin>>s;
// }

// void binary :: chk(void)
// {
//     for(int i=0 ; i <s.length() ; i++)
//     {
//     if (s.at(i)!= '0' && s.at(i) != '1')
//     cout<<"incorect"<<endl;
//     exit(0);
//     }
// }

// int main()
// {
// binary b;
// b.read();
// b.chk();
// return 0;
// }

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n;
    cin>>n;

    if (n==1){
        cout<<"one"<<endl;
    }
    else if (n==2){
        cout<<"two"<<endl;
    }
    else if (n==3){
        cout<<"three"<<endl;
    }
    else if (n==4){
        cout<<"four"<<endl;
        
    }
    else if (n==5){
        cout<<"five"<<endl;
    }
    else if (n==6){
        cout<<"six"<<endl;
    }
    else if (n==7){
        cout<<"seven"<<endl;
    }
    else if (n==8){
        cout<<"eight"<<endl;
    }
   
   
    else if (n==9){
        cout<<"nine"<<endl;
    }


    if (n%2==0){
        cout<<"even"<<endl;
        
    }
    else {
        cout<<"odd"<<endl;
    }
    return 0;
    
}