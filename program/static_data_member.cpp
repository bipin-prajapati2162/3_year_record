#include<iostream>
using namespace std;
class Demo
{
    int x,y;
    static int z;
    public:
    void getdata()
    {
        cout<<"\nenter two number:";
        cin>>x>>y;
        z++;
    }
    void putdata()
    {
        cout<<"\nx="<<x<<"\ty="<<y;
        cout<<"\nstatic z="<<z;
    }
};
int Demo::z;
int main()
{
    Demo aa,bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    return 0;
}
