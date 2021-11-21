#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,N,X,L;

cin>>n; //number of test cases 
for(int i=1; i<n;i++){
cin>>N; //number of slippers
cin>>X; //price of each pair 
cin>>L; //total number of left slipper
int Sum=0;
if(N==0){
    cout<<Sum<<endl;
}
int R= N-L;
if (N==0 ){
    Sum=0;
}
if(L>=R){
    Sum=L*X;
}
else{
    Sum=R*X;
}
cout<<Sum<<endl;
}
return 0;

}