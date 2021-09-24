// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     string st2;
//     // Opening files using constructor and reading it
//     ifstream in("sample.txt"); // Read operation
//     in>>st2;
//     getline(in, st2);  
//     cout<<st2;

//     return 0;
// // }

// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     string st = "Harry bhai";
//     // Opening files using constructor and writing it
//     ofstream out("sample.txt"); // Write operation
//     out<<st;

//     return 0;
// }

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // string s1="sample";
    // ofstream out("sample.txt");
    // out<<s1;

    string s2;
    ifstream in("sample.txt");
    getline (in , s2);
    in>>s2;
    cout<<s2;

    return 0;
}

