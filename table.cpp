//Write a C program to print the range of tables entered by the user.
#include<stdio.h>
main()
{
	int l,u,j,i,n,k;
	printf("Enter upper and lower limit\n");
	scanf("%d%d",&l,&u);
	printf("Enter range of table\n");
	scanf("%d",&n);
	for (i=l;i<=u;i++)
	{
		for (j=1;j<=n;j++)
		printf("%3dX%d=%d\n",i,j,(i*j));
		printf("\n");
	}
}
