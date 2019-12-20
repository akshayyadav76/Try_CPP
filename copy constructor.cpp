// Copy Constructor.

#include<iostream>
#include<conio.h>

using namespace std;
class test
{
	int a, b;
	public:
		test(int a, int b)	//Parameterized constructor
		{
			this->a = a;
			this->b = b;
		}
		test(test &obj)		//copy constructor.
		{
			a = obj.a;
			b = obj.b;
		}
		void show()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};
int main()
{
	test t1(10,20);		//calls parameterized constructor.
	test t2(t1);		//calls copy constructor.
	t1.show();
	t2.show();
	getch();
}
