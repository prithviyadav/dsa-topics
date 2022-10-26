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
}

int main()
{
    Node *head = input();
    print(head);

    return 0;
}

/*// STATICALLY
Node n1(10);
Node *head = &n1; // we will store the address of head node to access the linked list
Node n2(20);
n1.next = &n2;
cout << n1.data << endl;
cout << n2.data << endl;

// DYNAMICALLY
Node *n3 = new Node(10);
Node *head = n3; // n3 contains address of its node location in heap memory and n4 contains address of its node
Node *n4 = new Node(30);
n3->next = n4;*/

/* Node *head = NULL;         //we have dynamically allocated a new node because when we statically allocate a new node , its scope is local
    while (data != -1)         //and when loop gets iterated , it deallocates the node but in dynamic , it dont take place automatically.(we have to do it manually)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {                                                //this whole loop has time complexity of n^2 which can be reduced to n
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}*/