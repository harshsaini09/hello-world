#include<stdio.h>
int fact(int n)
{
	if (n>=1)
	return n*fact(n-1); 
	else
	return 1;
}
main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	fact(n);
	printf("this is factorial of your number %d\n",fact(n));
}
