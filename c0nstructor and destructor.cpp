//Example of default constructor and destructor.
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	float l,b;
	public:
		rectangle()		//Default constructor.
		{
			cout<<"Enter length and Breath: ";
			cin>>l>>b;
		}
		~rectangle()
		{
			cout<<"Area = "<<l*b;
			getch();
		}
};
int main()
{
	rectangle r;		//Object
}
