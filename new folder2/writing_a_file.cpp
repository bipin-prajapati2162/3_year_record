#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream FileName;
    FileName.open("FileName.txt",ios::out);
    if(!FileName)
    {
        cout<<"error while creating the file";
    }
    else
    {
        cout<<"file created and data got written to file";
        FileName<<"this is a blog posted on <a href=";
        FileName.close();
    }
    return 0;
}