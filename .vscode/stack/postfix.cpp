#include<bits/stdc++.h>
#include<cmath>
#include<stack>
#include<string>

using namespace std;
int PostfixEvaluation (string s1){
    stack<int > st1;
    
    for (int i = 0;i <s1.length(); i++){
        if ( s1[i]>='0'&& s1[i]<='9'){
            st1.push(s1[i]-'0'); 
            
        }
        else{
           int op2= st1.top();
            st1.pop();
           int op1= st1.top();
            st1.pop();

            switch (s1[i])
            {
                case '+':
                st1.push(op1+op2);
                break;
                case '-':
                st1.push(op1-op2);
                break;
                case '*':
                st1.push(op1*op2);
                break;
                case '/':
                st1.push(op1/op2);
                break;
                case '^':
                st1.push(pow(op1,op2));
                break;
            }
        }
    }
    return st1.top();
}

int main () {
    cout<<PostfixEvaluation("46+2/5*7+");
    return 0 ;
}