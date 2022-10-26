#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int age;

public:
    char *name;

    student(int age, char *name)
    {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{

    cout << "hello";
    return 0;
}