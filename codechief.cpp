#include<bits/stdc++.h>
using namespace std;


int main(){
    int T,A,B,C;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
    cin>>A;
        if(A<100) cout<<"Easy"<<endl;
        else if(A<200) cout<<"Medium"<<endl;
        else cout<<"Hard"<<endl;
    }
    return 0;
}

