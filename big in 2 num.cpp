//W.A.P to find maximum of 2 no.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter value of a&b: ";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"A is greater.";
	}
	else if(b>a)
	{
	    cout<<"B is greater.";
	}
	else
	    cout<<"Both are equal.";
	    getch();
}
