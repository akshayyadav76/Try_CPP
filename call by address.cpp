//Call by address.
#include<iostream>
#include<conio.h>
using namespace std;
void show(int *a)
{
	*a = 200;
	cout<<"In function a = "<<*a<<endl;
}
int main()
{
	int a = 100;
	cout<<"Before fun call a = "<<a<<endl;
	show(&a);
	cout<<"After fun call a = "<<a;
	getch();
}
