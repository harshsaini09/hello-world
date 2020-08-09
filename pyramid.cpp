/*Write a C program to print the following pattern:
*
* *
* * *
* * * *  */
#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter limit of rows\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		printf("*");
		printf("\n");
	}
}
