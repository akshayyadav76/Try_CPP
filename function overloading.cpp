//Function overloading with different data types.
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		int sum(int x, int y)
		{
			cout<<"Sum of integer value is "<<x+y;
		}
		double sum(double x, double y)
		{
			cout<<"\nSum of float value is "<<x+y;
		}		
};
int main()
{
	A a1;
	a1.sum(10,20);
	a1.sum(1.1,2.2);
	getch();
}
