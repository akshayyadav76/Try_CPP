//Function with default Arguments.
#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x = 1, int y = 2, int z = 3)
{
	return x+y+z;
}
int main()
{
	int a = 10, b = 20, c = 30;
	cout<<"Sum = "<<sum(a,b,c)<<endl;
	cout<<"Sum = "<<sum(a,b)<<endl;
	cout<<"Sum = "<<sum(a)<<endl;
	cout<<"Sum = "<<sum()<<endl;
	getch();
}
