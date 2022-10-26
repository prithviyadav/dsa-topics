#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // it is { Node * } because it is storing the address of a node

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *input()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head; // we use temp because we don't want to lose the address of head node at the end
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insert(Node *head, int data, int n)
{
    Node *newnode = new Node(data);
    Node *temp = head;
    int i = 0;
    if (n == 0)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    while (temp != NULL && i < n - 1)
    {
        temp = temp->next;
        i++;
    }
    if (temp != NULL)
    {
        Node *tem = temp->next; // newnode->next = temp->next
        temp->next = newnode;   // temp->next = newnode
        newnode->next = tem;
    }
    return head;
}

Node *del(Node *head, int index)
{
    Node *temp = head;
    int i = 0;
    if (head == NULL)
    {
        return head;
    }
    if (index == 0)
    {
        head = head->next;
        return head;
    }
    while (temp != NULL && i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next; // temp->next = temp->next->next;
        Node *b = a->next;
        temp->next = b;
    }
    return head;
}

