//counting vowels
#include<stdio.h>
main()
{
	char s[100];
	int i,v=0;
	printf("enter a word\n");
	gets(s);
	for(i=0;i<=99;i++)
	{
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U') 
		{
		v++;
		}
	}
	printf("number of vowels are %d",v);
}
