#include<iostream>
using namespace std;
int main()
{
    int num,originalnum,remainder,result=0;
    cout<<"enter a three digit integer :";
    cin>>num;
    originalnum=num;
    while(originalnum!=0){
        remainder=originalnum %10;
        result+=remainder*remainder*remainder;
        originalnum/=10;
    }
    if(result==num)
    cout<<num<<" is an armstrong number.";
    else
    cout<<num<<" is not an armstrong number.";
    return 0;
}