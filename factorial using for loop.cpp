//Write a C program using functions to find the factorial of the number entered by user
#include<stdio.h>
int fact(int);
main()
{
	int n;
	printf("Enter a number for its factorial\n");
	scanf("%d",&n);
	printf("factorial of your number is %d\n",fact(n));
	return 0;
}
int fact(int n)
{
	int i,fact=1;
	for (i=1;i<=n;i++)
	fact=fact*i;
	return (fact);
}
