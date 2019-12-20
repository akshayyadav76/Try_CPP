//Finding factorial with Recursion.
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int f, x = 4;
	f = fact(x);
	printf("Factorial of 4 is %d ",f);
}

