#include <stdio.h>
#include <string.h>
int main()
{
	 char str[100],s[100];
	 int i,n,j;
	 n=0;
	 gets(str);
	 for (i=0;str[i]!='\0';i++)
	     n++;
	 for (i=n-1,j=0;s[j]!='\0'||i>=0;i--,j++)
	     s[j]=str[i];
	 printf ("%d\n",n);
	 puts(s);
	 return 0;
 } 
