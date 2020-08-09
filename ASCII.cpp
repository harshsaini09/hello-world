#include<stdio.h>
 
int main() 
{
   int i;
   char ch=32;
 
   for (i = 32; i <= 255; i++) 
   {
      printf("%c = %d \n", ch ,i);
      
      ch = ch+1;
   }
}
