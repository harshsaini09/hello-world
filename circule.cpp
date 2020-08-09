//Write a C program to print area and circumference of a circle. Take the input (radius) from user (set pi=3.14).//
#include<stdio.h>
main()
{
	int r;
	printf("Enter radius\n");
	scanf("%d",&r);
	printf("area of circle is %f\n",3.14*r*r);
	printf("circumference of circle is %f\n",2*3.14*r);
}
