//Write a C program using functions to print Fibonacci series upto length n (n= length of Fibonacci series entered by user)
#include<stdio.h>
int fibo(int);
main()
{
	int n;
	printf("Enter length of fibonacci series");
	scanf("%d",&n);
	printf("%d",fibo(n));
}
int fibo(int n)
{
int a=0,b=1,c,i;
for (i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		return a;
	}
}
