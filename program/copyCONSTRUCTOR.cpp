//copy constructor
#include<iostream>
using namespace std;

class Example{
	int data;
	public:
		Example(){
		}
		Example ( int x){
			data = x;
			
		}
		void display (){
			cout<<"data = "<<data<<endl;
			
		}
		Example(Example &t){
			data= t.data;
			cout<<"copy constructor Run successfully"<<endl;
		}
		
};

int main(){
	Example obj1(50);
	Example obj2(obj1);
	obj1.display();
	obj2.display();
	return 0;
}
