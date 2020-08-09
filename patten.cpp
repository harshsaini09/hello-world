/* Write a C program to print the following pattern:
* * * *
* * *
* *
*               */
#include<stdio.h>
main()
{
	int i,n,j;
	printf("Enter limit of rows\n");
	scanf("%d",&n);
	for (i=n-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		printf("*");
	    printf("\n");
	}
}
