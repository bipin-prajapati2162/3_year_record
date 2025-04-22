//default constructor
#include<iostream>
using namespace std;
class Student{
	int rno;
	char name[50];
	double fee;
	public:
		Student(){   //default constructor
			cout<<"enter the rollno : ";
			cin>>rno;
			cout<<"enter the name : ";
			cin>>name;
			cout<<"enter the fee : ";
			cin>>fee;
		}
		void display(){
			cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
		}
};

int main(){
	Student s;
	s.display();
	return 0;
}
