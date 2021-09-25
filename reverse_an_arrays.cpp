#include<iostream>
using namespace std;


void ReverseArray(int arr[], int start ,int end){
while(start <end){
    int temp=arr[start];
    arr[start]=arr[end];

    arr[end]=temp;
    start++;
    end--;
}
}
void display(int arr1[],  int size){
 for (int i=0;i<size;i++){
	    cout<<arr1[i]<<" ";
	}
}
int main()
 {
	int T;cin>>T;
	int n; cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
	    cin>>a[i];
	}
	ReverseArray(a,0,n-1);
	display(a,n);
	return 0;
}