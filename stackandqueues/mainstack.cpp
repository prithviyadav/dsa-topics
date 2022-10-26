#include <bits/stdc++.h>
#include "stackclass.h"
using namespace std;
int main()
{
    stackusingarray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.sizestack() << endl;
    cout << s.isempty() << endl;

    return 0;
}