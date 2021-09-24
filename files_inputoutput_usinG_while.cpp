#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    // ofstream out("sample.txt");
    // string s1;
    // cout<<"what is you name :"<<endl;
    // cin>>s1;
    // out<<s1<<" is your name "<<endl;
    

    ifstream in("sample.txt");
    string s1;
    while(in.eof()==0){
    getline (in, s1 );
    in>>s1;
    cout<<s1;
    }
    return 0;
}