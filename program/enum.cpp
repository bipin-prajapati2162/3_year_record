#include<iostream>
using namespace std;
/*enum week{mon,tue,wed,thu,fri,sat,sun};
int main()
{
    week day;
    day=fri;
    cout<<"day:"<<day+1<<endl;
    return 0;
}*/
enum year{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,Dec};
int main()
{
    int i;
    for(i=jan;i<=Dec;i++)
    cout<<i<<"  ";
    return 0;
}