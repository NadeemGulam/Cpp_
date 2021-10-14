#include<bits/stdc++.h>
using namespace std ;


class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
} ;
void insertaAtTail(node* &head , int val ){
    node* n    = new node(val);
    if (head == NULL){
        head = n;
        return ;
    }
    node* temp = head;
    while (temp -> next != NULL){
        temp= temp->next;
    }
    temp -> next =n;
}
void display (node* head ){
    node* temp = head ;
    while(temp != NULL){
        cout<<temp ->data<<"->";
        temp= temp ->next;
    
    }
    cout<<"NULL";
}

node * reverseK(node* & head, int key){
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;
        int count=0;
        while (currptr != NULL && count < key)
{
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr ;
        count ++; 

}

if (nextptr!=NULL){
    head->next= reverseK(nextptr,key);
}
return prevptr;
}

int main()
{
    node* head = NULL;
    insertaAtTail(head,1);
    insertaAtTail(head,2);
    insertaAtTail(head,3);
    insertaAtTail(head,4);
    insertaAtTail(head,5);
    insertaAtTail(head,6);
    display (head);
    cout<<endl;
    int key=2;
    node* newhead = reverseK(head , key);
    display (newhead);
    return 0;

}


