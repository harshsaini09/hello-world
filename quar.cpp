//Write a C program to find the roots of quadratic equation
#include<stdio.h>
#include<math.h>
main()
{
int a,b,c;
float x,y;
printf("Enter the coefficient of x^2,x,constant\n");
scanf("%d%d%d",&a,&b,&c);
int d;
d=sqrt(b*b-(4*a*c));
if(d>0)
{ printf("the roots are real and not equal\n");
x=((-b+d)/(2*a));
y=((-b-d)/(2*a));
printf("the roots are %f and %f",x,y);
}
else if(d==0)
{
printf("The roots are real and equal\n");
y=x=-b/(2*a);
printf("the roots are %f and %f",x,y);	
}
else if(d<0)
{printf("the roots are imaginary\n");
x=(-b/(2*a));
y=sqrt(d)/(2*a);
printf("the roots are %f+_%di",x,y);
}
}
