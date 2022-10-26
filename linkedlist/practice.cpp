#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int y)
    {
        this->data = y;
        this->next = NULL;
    }
};

node *insert(node *head)
{
    int n;
    cout << "Enter data";
    cin >> n;
    node *newnode = new node(n);
    if (head == NULL)
    {
        return newnode;
    }
    newnode->next = head;
    head = newnode;
    return head;
}

node* deletenode(node *head)
{
    head=head->next;
    return head;
}

void reverseprint(node* head)
{
    //1 approach : with help of an array 
    if (head == NULL)
    {
        return;
    }
    reverseprint(head->next);
    cout << head->data << " ";

}

node* reverse(node *head)
{
    node* current = head;
    node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
