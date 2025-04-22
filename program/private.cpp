#include<iostream>
using namespace std;
class add
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;

    }
    void sum(){
        cout<<"sum of "<<a<<" and "<<b<<" is :"<<a+b;
    }
};
int main()
{
    add obj;
    obj.setdata(9,5);
    obj.sum();
    return 0;
}