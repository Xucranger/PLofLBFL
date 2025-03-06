#include <stdio.h>
int main()
{
	char s1[100],s2[100];
	gets(s1);
	int i=0,j;
	while(s1[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);
	for(j=0;j<i;j++)
	{
		s2[j]=s1[i-j-1];
	}
	s2[i]='\0';
	printf("%s\n",s2);
	return 0;
}
