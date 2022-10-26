#include <bits/stdc++.h>
#include "linkedlistclass.h"
using namespace std;
int main()
{
    cout << "Enter elements : " << endl;
    Node *head = input();
    print(head);
    int i, data = 0;
    cout << "Enter index and data : " << endl;
    cin >> i >> data;
    head = insert(head, data, i);
    print(head);
    int index;
    // cin >> index;
    // head = del(head, index);
    // print(head);
    return 0;
}
