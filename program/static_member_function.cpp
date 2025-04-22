#include<iostream>
using namespace std;
class Demo
{
    int x,y;
    static int z;
    public:
    void getdata()
    {
        cout<<"\n enter two number:";
        cin>>x>>y;
        z++;
    }
    void putdata()
    {
        cout<<"\n x="<<x<<"\t y="<<y;
        cout<<"\n static z="<<z<<endl;
    }
    static void print()
    {
        cout<<"static variable:"<<z<<endl;
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
    cout<<"static method called:"<<endl;
    Demo::print();
    return 0;

}