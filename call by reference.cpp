//Call by Reference.
#include<iostream>
#include<conio.h>
using namespace std;
void show(int &a)
{
	a = 200;
	cout<<"In function a = "<<a<<endl;
}
int main()
{
	int a = 100;
	cout<<"Before function call a = "<<a<<endl;
	show(a);
	cout<<"After function call a = "<<a;
	getch();
	
}
