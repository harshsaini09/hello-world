//Write a C program to take an integer input from the user and reverse the entered input using functions.
#include<stdio.h>
int reverse(int);
main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("reverse of your number is %d",reverse(n));
}
int reverse(int n)
{
	int i,rev=0,r;
	for(i=1;n!=0;i++)
	{
	r=n%10;
	rev=rev*10+r;
	n/=10;
    }
	return rev;
}
