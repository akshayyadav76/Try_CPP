//Friend function in different class.
#include<iostream>
#include<conio.h>
using namespace std;
class marks;	//class forward declaration.
class stu
{
	int id;
	char name[20];
	friend void show(stu, marks);	//Friend function declaration.
};
class marks		//class defination.
{
	int m, p, c;
	friend void show(stu, marks);
};
void show(stu s, marks mk)
{
	cout<<"Enter Stu id, Name, & Marks in three subjects";
	cin>>s.id>>s.name>>mk.m>>mk.p>>mk.c;
	cout<<"Total marks = "<<mk.m+mk.p+mk.c;
}
int main()
{
	stu st;
	marks mar;
	show(st, mar);
	getch();
}
