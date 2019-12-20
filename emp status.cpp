// Data of a emp by using constructor and destructor.

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class emp
{
	int id;
	char name[20];
	float sal;
	public:
		emp(int id, char name[20])
		{
			this->id = id;
			strcpy(this->name, name);
			sal = 0;
		}
		emp(int id, char name[20], float sal)
		{
			this->id = id;
			strcpy(this->name, name);
			this->sal = sal;
		}
		void show()
		{
			cout<<"Id = "<<id<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Salary = "<<sal<<endl;
		}
};
int main()
{
	emp e1(1, "Ram");
	emp e2(2, "lakhan",20000);
	e1.show();
	e2.show();
	getch();
}
