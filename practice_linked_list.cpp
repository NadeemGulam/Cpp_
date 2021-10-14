// #include<bits/stdc++.h>
// using namespace std ;
// class node{
//     public:
//     int data;
//     node * next;

//     node (int val){
//         data = val ;
//         next = NULL;
//     }
// };
// void insertAtTail(node* &head ,int val){
//     node* n = new node (val);
//     node * temp = head ;
//     if (head == NULL){
//         head = n;
//         return ;
//     }
//     while (temp->next != NULL){
//         temp = temp -> next;
//     }
//     temp -> next=n;
// }
// void display(node * head){
//     node * temp= head ;
//     while (temp != NULL ){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL";
// }

// int main(){
//     node *head = NULL;
//     insertAtTail(head,0);
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     insertAtTail(head,5);
//     insertAtTail(head,6);
//     insertAtTail(head,7);
//     display(head);
//     return 0 ;
// }

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        // cout<<temp->data<<"->";
        temp = temp->next;
    }
    temp->next = n;
}




void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}




void display(node* &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}



bool search (node* head, int key ){
    node * temp = head ;
    while ( temp != NULL ){
        if (temp->data == key){
            return true;
        }
        temp =temp->next;
        
    }
    return false;
}


void deletionAtTail(node * head , int val ){
    node* temp = head ;
    while (temp ->next->data= val){
        temp = temp -> next;

    }
    node * todelete = temp->next ;
    temp = temp -> next -> next ;
    delete todelete;

}



void deletionAtHead(node * head  ){
    // node* temp = head ;
    node * todelete = head ;
    head= head ->next;
    delete todelete;
}



void deletion (node* & head , int val ){
    if (head == NULL){
    return;
    }
    if (head -> next == NULL){
        deletionAtHead(head);
        return;
    }
    
}


 node* reverse01 (node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while (currptr != NULL){
        nextptr = currptr -> next ;
        currptr ->next  = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}


void lenght (node* &head ){
    int count=0 ;
    class node * temp;
     temp= head ;
    while ( temp !=NULL){
        count++;
        temp = temp->next ;
    }
    cout<<endl;
    cout<<"lenght is :" <<count;
}



int main()

{
    node *head = NULL;
    insertAtTail(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    cout<<endl;
    node * new1=reverse01(head );
    display(new1);
    lenght ( head);
}


    