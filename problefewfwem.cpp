// #include<iostream>
// using namespace std;

// int main(){
//     int  n;
//     cout<<"Enter the number of lines :"<<endl;
//     cin>>n;
//     for (int i =0 ; i <n; i++){
//         for (int j = 1; j <= i+1; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int  n;
//     cout<<"Enter the number of lines :"<<endl;
//     cin>>n;
//     for(int i=n; i>0; i--)
//     {
//       for(int j=0; j<=n; j++)
//       {
//         if (j>=i)
//         {
//           cout<<j;
//         }
//         else
//         {
//           cout<<" ";
//         }
//       }
//       cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int  n;
//     cout<<"Enter the number of lines :"<<endl;
//     cin>>n;
//     for(int i = n ; i>=0; i--){
//         for (int j=1 ; j<=i ; j++){
//             cout<<j;
//     //           if (j>=i)
//     //     {
//     //       cout<<j;
//     //     }
//     //     else
//     //     {
//     //       cout<<" ";
//     //     }
//       }
//       cout<<endl;
//     }
        
    
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int  n;
    cout<<"Enter the number of lines :"<<endl;
    cin>>n;
    for (int i =0 ; i <n; i++){
        for (int j = 5; j <= i+1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
