#include<bits/stdc++.h>
#include<cmath>
#include<stack>
#include<string>

using namespace std;
int PrefixEvaluation (string s){
    stack<int > st;
    for (int i = s.length()-1;i >=0; i--){
        if ( s[i]>='0'&& s[i]<='9'){
            st.push(s[i]-'0'); 
            
        }
        else{
           int op1= st.top();
            st.pop();
           int op2= st.top();
            st.pop();

            switch (s[i])
            {
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int PostfixEvaluation (string s1){
    stack<int > st1;
    
    for (int i = 0;i <=s1.length(); i++){
        if ( s1[i]>='0'&& s1[i]<='9'){
            st1.push(s1[i]-'0'); 
            
        }
        else{
           int op1= st1.top();
            st1.pop();
           int op2= st1.top();
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
    cout<<PrefixEvaluation("-+7*45+20");
    cout<<PostfixEvaluation("563/-");
    return 0 ;
}