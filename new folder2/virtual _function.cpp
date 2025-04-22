#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void print()
    {
        cout<<"print base class \n";
    }
    void show()
    {
        cout<<"show base class \n";
    }
};
class derived:public Base
{
    public:
    void print()
    {
        cout<<"print derived class \n";
    }
    void show()
    {
        cout<<"show derived class \n";
    }
};
int main()
{
    Base *bptr;
    derived d;
    bptr = &d;
    bptr -> print();
    bptr -> show();
    return 0;
}