#include<bits/stdc++.h>

#define n 100
// using namespace std;
class stack {
    int *arr ;
    int top;
    public:
    stack(){
        arr = new int[n];
        top= -1;
    }
    void Push (int x){
        if (top == n-1){
            std::cout<<"Stack i overflowing \n";
            std::cout<<"\n";
            return;
        }
        top++;
        arr[top]=x;
    }
    void Pop(){
        if (top == -1){
            std::cout<<"No element are there to remove \n";
            std::cout<<"\n";
            return;
        }
        top--;
    }
    int Top ()
    {
        if (top == -1){
           std:: cout<<"No element are there to remove \n";
           std::cout<<"\n";
            return -1;
        }

            return top;
    }
    bool empty(){
        return top==-1;
    }
};
int main () 
{
stack st ;
st.Push(0);
st.Push(1);
st.Push(2);
st.Push(3);
st.Push(4);
std::cout<<st.Top();
std::cout<<"\n";
st.Pop();
std::cout<<st.Top();
std::cout<<"\n";
st.Pop();
st.Pop();
st.Pop();
st.Pop();
std::cout<<st.Top();
std::cout<<"\n";
std::cout<<st.empty (); 


}