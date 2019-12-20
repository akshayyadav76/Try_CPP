//Declare a friend function.
#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	int a, b;
	friend void show(sample);
};
void show(sample s)
{
	cout<<"Enter two numbers";
	cin>>s.a>>s.b;
	cout<<"a = "<<s.a<<endl;
	cout<<"b = "<<s.b<<endl;
}
int main()
{
	sample s;	//object
	show(s);
	getch();
}
