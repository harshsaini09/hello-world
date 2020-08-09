//Write a C program to check whether the number entered by the user is a palindrome.
#include<stdio.h>
main()
{
	int n,rev=0,r,temp;
	printf("Enter a number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if (temp==rev)
	printf("this is a palindrome number %d\n",rev);
	else 
	printf("this is not a palindrome number %d\n",temp);
}
