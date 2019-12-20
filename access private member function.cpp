//Accessing Private member function.
#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
	int id;
	char name[20];
	float sal;
	void getemp()	//Private member function.
	{
		cout<<"Enter emp id, name, salary: ";
		cin>>id>>name>>sal;
	}
	public:
		void putemp()
		{
			getemp();	//Callimg private member function.
			cout<<"Id = "<<id<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Salary = "<<sal<<endl;
		}
};
int main()
{
	emp e;		//object
	e.putemp();
	getch();
}
