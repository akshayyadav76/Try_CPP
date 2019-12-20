// Constructor Overloading.

#include<iostream>
#include<conio.h>
using namespace std;

class circle
{
	float r;
	public:
		circle()	//Default Constructor.
		{
			this->r = r;
		}
		void area()
		{
			cout<<"Area = "<<3.14*r*r<<endl;
		}
};
int main()
{
	circle c1;		//calls default constructor.
	circle c2;		//calls default parameterizrd construcor.
	c1.area();
	c2.area();
}
