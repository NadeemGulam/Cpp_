
#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
int temp=0;
    int countZeroes(int arr[], int n) {
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                temp++;
            }
            
        }
            return temp ;
            
        }
};

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution D1;
    int d= D1.countZeroes(a,n);
    cout<<d;
    return 0;
}
