#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<"in the caller:\n";
    cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    return 0;
}
void swap(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"inside function:\n";
    cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
}