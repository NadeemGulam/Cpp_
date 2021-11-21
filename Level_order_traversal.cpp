// #include<bits/stdc++.h>
// using namespace std ;

// class Node{
//     public:
//     int data ;
//     Node* left ;
//     Node* right;
//     Node(int value){
//         data = value;
//         left= NULL;
//         right=NULL;
//     }
// };
// // void Inorder(Node* root ){
// //        if (root==NULL){
// //         return;
// //     }
// //     Inorder(root->left);
// //     cout<<root->data<<" ";
// //     Inorder(root->right);
// // }

// void LevelOrder(Node*root){
//     if(root ==NULL){
//         return ;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Node*node = q.front();
//         q.pop();
//         if(node!=NULL){
//             cout<<node->data<<" ";
//             if(node->left!=NULL){
//                 q.push(node->left);
//             }
//             if(node->right!=NULL){
//                 q.push(node->right);
//             }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// int main (){
//     Node* root = new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     // Inorder(root);
//      LevelOrder(root);
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
 
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    // code here
	        int long long temp=0;
	    for(int i=0;i<=n;i++){
	        temp=temp+i;
            
	    }
        return temp;
        }
int main(){
    int n=1;
    cout<<seriesSum(n);
}