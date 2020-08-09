//Write a C program to find the smallest out of three numbers//
#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if (n1<n2&&n1<n3)
	printf("this is smallest %d",n1);
	else if (n2<n1&&n2<n3)
	printf("this is smallest %d",n2);
	else if (n3<n1&&n3<n2)
	printf("this is smallest %d",n3);
	
		
}
