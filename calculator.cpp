// Write a C program to implement all the arithmetic functions of a calculator (such as addition, subtraction, division, multiplication etc.) by taking the inputs from the user//
#include<stdio.h>
main()
{
	int n,m,o,sum;
	printf("enter any two numbers\n");
	scanf ("%d%d",&n,&m);
	printf("choese operations\n1 is for addition\n2 is for subtraction\n3 is for multiplication\n4 is for division\n");
	scanf ("%d",&o);
	if (o==1)
	printf("your result is %d",n+m);
	else if (o==2)
	printf("your result is %d",n-m);
    else if (o==3)
	printf("your result is %d",n*m);
    else if (o==4)
	printf ("your result is %d",n/m);
    else 
	printf("unknown operatur");
}
