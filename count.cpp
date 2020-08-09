#include<stdio.h>
main()
{
  char s[100];
  int i,alpa=0,bla=0,dig=0,mis=0;
  printf("Enter your word\n");
  gets(s);
  for(i=0;s[i]!='\0';++i)
  {
  	if(s[i]>='a' && s[i] <='z' || s[i]>='A' && s[i] <='Z')
  	alpa++;
	else if(s[i]>='0' && s[i]<='9')
	dig++;
	else if(s[i]==' ')
	bla++;
    else
	mis++;
}
  printf("alphabets are %d\n",alpa);
  printf("digits are %d\n",dig);
  printf("blanks spaces are %d\n",bla);
  printf("other variables are %d\n",mis);
}
