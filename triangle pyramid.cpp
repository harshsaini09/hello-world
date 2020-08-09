/*Write a C program to print the following pattern:
       *
     * * *
   * * * * *
 * * * * * * *       */
#include<stdio.h>
main()
{
	int n,i,j,temp;
	printf("Enter limit of rows\n");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		for(j=1;j<temp;j++)
		printf(" ");
		temp--;
		for(j=1;j<=2*i-1;j++)
			printf("*");
			printf("\n");
	}
}
