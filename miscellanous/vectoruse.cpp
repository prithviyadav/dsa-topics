#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> *vptr = new vector<int>();
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1] = 100;      // we will use [] for UPDATION and TO GET ANY VALUE
    // v[3]=40; this is not right approach as vector will only treat pushback as valid input taker and the cursor  will remain at the index 2(30)
    //          and when we will push later than element will be inserted at the 3 i.e. the next of 30;
    
     cout << v[0] << " " << v[1] << " " << v[2];     //v[6] will print garbage value but at() will not print garbage value but generate error message
     cout << v.at(2);
     cout << v.size();
     v.pop_back();
     v.capacity();  //it will print current capacity of the vector which gets doubled as the size gets equal to the capacity

     return 0;
}