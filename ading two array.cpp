#include<stdio.h>
main()
{
	int a[4],b[4],c[4];
	int i,k,j,n=4;
	printf("enter sorted elements in first array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("enter sorted elements in scond array\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(c[i]==c[j])
			{
				for(k=j;k<n;k++)
				c[k] = c[k+1];
			}
			n--;
			j++;
		}
	}
	for(i=0;i<n;i++)
	printf("%3d\n",c[i]);
}
