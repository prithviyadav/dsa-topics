#include <bits/stdc++.h>
using namespace std;
class stackusingarray
{
    private:
    int* data;
    int nextindex;
    int capacity;

    public:
    stackusingarray(int size)
    {
        data = new int[size];
        nextindex = 0;
        capacity = size;
    }

    int sizestack()
    {
        return nextindex;
    }

    bool isempty()
    {
        return nextindex == 0;
    }

    void push(int element)
    {
        if (nextindex == capacity)
        {
            cout << "overflow";
            return;
        }
        data[nextindex] = element;
        nextindex++;
    }

    int pop()
    {
        if (isempty())
        {
            return 0;
        }
        nextindex--;
        return data[nextindex];
    }

    int top()
    {
        if (isempty())
        {
            return 0;
        }
        return data[nextindex - 1];
    }
};


