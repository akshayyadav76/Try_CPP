//W.A.P to find maximum in 3 no.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter value of a,b and c: ";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<"A is greater.";
	}
	else if(b>a&&b>c)
	{
		cout<<"B is greater.";
	}
	else if(c>a&&c>b)
	{
		cout<<"C is greater.";
	}
	else if(a==b||a==c)
	{
		if(a==b)
		{
			cout<<"A and B are Equal.";
		}
		else
		    cout<<"A and C are Equal.";
	}
	else if(b==c)
	{
		cout<<"B and C are Equal.";
	}
	else 
	cout<<"All are Equal.";
	getch();
}
