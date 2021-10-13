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
void insertaAtTail(node *&head, int val)
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
    cout << "NULL";
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void deleteAthead(node *head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion1(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAthead(head);
        return;
    }
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
int main()
{
    node *head = NULL;
    insertaAtTail(head, 1);
    insertaAtTail(head, 2);
    insertaAtTail(head, 3);
    insertaAtTail(head, 4);
    insertAtHead(head, 0); // head insertion call
    // display (head);
  
    // cout<<search (head, 4);  // linear search
    // deletion1(head ,1);
    // deleteAthead(head);
    node *newhead = reverse(head);
    display(head);
    cout<< endl;
    display(newhead);
    return 0;
}
