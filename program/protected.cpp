#include<iostream>
using namespace std;
class parent
{
    protected:
    int a,b;
};
class child: public parent{
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void putdata()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    child obj;
    obj.getdata(9,1);
    obj.putdata();
    return 0;
}





    

    
