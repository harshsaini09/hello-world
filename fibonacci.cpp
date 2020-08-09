//Write a C program to print Fibonacci series upto length n (n= length of Fibonacci series entered by user).
#include<stdio.h>
main()
{
	int n,i,a=0,b=1,c;
	printf("Enter range of fibonacci number\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf(" %d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
