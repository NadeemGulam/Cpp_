#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
    int data ;
    Node* left ;
    Node* right;
    Node(int value){
        data = value;
        left= NULL;
        right=NULL;
    }
}; 
int search(int Inorder[],int Start , int End ,int curr){
    for (int i = Start; i <= End; i++)
    {
        if(Inorder[i]==curr){
            return i;

        }
    }
    return -1;
    
}
Node* BuildTree(int Preorder[],int Inorder[],int Start,int End){
    static int idx = 0;
    if(Start>End){
        return NULL;
    }
    int curr = Preorder[idx];
    idx++;
    Node* node = new Node(curr);

    if (Start ==End){
        return node;
    }
    int pos =search(Inorder ,Start,End,curr);
    node->left=BuildTree(Preorder,Inorder,Start,pos-1);
    node->right=BuildTree(Preorder,Inorder,pos+1,End);
    return node;

}
void InorderPrint(Node* node){
    if(node == NULL){
        return;
    }
    InorderPrint(node->left);
    cout<<node->data<<" ";
    InorderPrint(node->right);
}
 int main () 
 {
     int Preorder[]={1,2,4,3,5};
     int inorder[]={4,2,1,5,3};
     Node* root=BuildTree(Preorder,inorder,0,4);
     InorderPrint(root);
 }