#include <iostream>
using namespace std;
class A 
{
	public:
	int a;
	void get_A_data()
	{
		cout << "Enter value of a: ";
		cin >> a;
	}
};
class B : public A 
{
	public:
	int b;
	void get_B_data()
	{
		cout << "Enter value of b: ";
		cin >> b;
	}
};
class C : public B 
{
	private:
	int c;
	public:
	void get_C_data()
	{
		cout << "Enter value of c: ";
		cin >> c;
	}
	void sum()
	{
		int ans = a + b + c;
		cout << "sum: " << ans;
	}
};
int main()
{
	C obj;
	obj.get_A_data();
	obj.get_B_data();
	obj.get_C_data();
	obj.sum();
	return 0;
}
