//Digit sum using function.
#include<stdio.h>
int digitsum(int n);
int main()
{
	int n, sum;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Digit sum is %d",digitsum(n));
}
int digitsum(int n)
{
	int R, S = 0;
	while(n>0);
	{
		R = n%10;
		S = S+R;
		n = n/10;
	}
	return S;
}
