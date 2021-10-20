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
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
    temp = temp->next;
    }

cout << " NULL";
}

int length(node* head ){
    int l=0;
    node*temp = head ;
    while (temp != NULL){
        temp = temp -> next;
        l++;
    }
    return l;
}

node* kappend(node* &head , int k){
    node* newtail;
    node * tail = head;
    node* newhead;
    int l =length(head);
    int count =1;
    while (tail->next != NULL){
        tail=tail->next;
        count++;
        if(count == l-k ){
            newtail= tail;
        }
        if(count == l-k+1 ){
            newhead= tail;
        }
    }
    newtail->next = NULL;
    tail ->next  = head;
    return newhead;
    
}
int main()
{
    node* head= NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    cout<<endl;
    node* newhead= kappend(head,3);
    display(newhead);
    return 0;

}