//Member function with Argumentd and with return value.
#include<iostream>
#include<conio.h>
using namespace std;
class big
{
	int a, b;
	public:
		void getdata(int x, int y)
		{
			a = x;
			b = y;
		}
		int putbig()
		{
			return a>b?a:b;		//Using ternary operator
		}
};
int main()
{
	big b;
	int x, y;
	cout<<"Enter two no's ";
	cin>>x>>y;
	b.getdata(x,y);
	cout<<b.putbig()<<" is big";
	getch();
}
