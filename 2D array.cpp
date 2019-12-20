//2-D Array.
#include<stdio.h>
int main()
{
	int A[2][3], i, j;
	printf("Enter six elements : ");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Elements are : ");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d ",A[i][j]);
		}
	}
}
