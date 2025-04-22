#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int a,int b)
    {
        this -> a=a;
        this -> b=b;
    }
    void show()
    {
        cout<<" "<<b<<endl;
    }
};
int main()
{       
    class A obj1(20,30);
    obj1.show();
    return 0;
}
