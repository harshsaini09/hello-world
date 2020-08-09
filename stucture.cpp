#include<stdio.h>
struct marks
{
	int marks;
};
int main()
{
	int n;
	printf("No of marks:");
	scanf("%d",&n);
	struct marks a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter students marks\n");
		scanf("%d",&a[i].marks);
	}
	for(i=0;i<n;i++)
	printf("%3d\n",a[i].marks);
}
