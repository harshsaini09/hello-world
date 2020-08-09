#include<stdio.h>
int arm(int n)
{
	int m,a,temp,sum=0;
	while(n!=0)
	{
		a=n%10;
		m=a*a*a;
		sum=sum+m;
		n/=10;
	}
		return sum;
}
main()
{
	int n,temp;
	printf("enter a number \n");
	scanf("%d",&n);
	temp=n;
	if (temp==arm(n))
	printf("this is armstrong number ");
	else
	printf("this is not armstrong ");
}
