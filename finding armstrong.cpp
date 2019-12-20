//W.A.P. to check number is Armstrong or not by 3 digit number.

#include<stdio.h>
int main()
{
	int n, r, x, s = 0;
	printf("Enter three digit number:");
	scanf("%d",&n);
	
	x = n;
	
	while(n>0)
	{
		r = n%10;
		s = s+r*r*r;
		n = n/10;
	}
	if(x==s)
	{
		printf("Number is Armstrong.");
		
	}
	else 
	printf("Number is not a Armstrong.");
}
