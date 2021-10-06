#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pos,ele;
    int a[n];
    cout<<"enter the elel"<<endl;   cin>>n>>pos>>ele;
    
    for(int i= 0 ; i<n;i++){
        cin>>a[i];

    }
    for(int j= n-1 ; j>=pos-1 ; j--){
        
        a[j+1] = a[j];
    }
    a[pos-1]=ele;
    pos++;

    return 0;
}