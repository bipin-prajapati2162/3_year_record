#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream FileName;
    FileName.open("fileName",ios::out);
    if(!FileName)
    {
        cout<<"error while creating the file";
    }
    else
    {
        cout<<"file created successfully";
        FileName.close();
    }
    return 0;
}