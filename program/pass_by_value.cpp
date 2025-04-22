#include<iostream>
using namespace std;
void swap(int x,int y);
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<"in the caller:\n";
    cout<<"a="<<a<<"\nb="<<b<<endl;
    return 0;
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"inside function:\n";
    cout<<"x="<<x<<"\ny="<<y<<endl;
}