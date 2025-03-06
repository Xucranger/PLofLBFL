#include <stdio.h>
#include <string.h>
int end(char a[1002],char b[1002])
{
	int a1,b1,e,f;
	int s;
	a1=strlen(a);
	b1=strlen(b);
	e=(a[a1-1]-48);
	f=(b[b1-1]-48);
	if((a[0]=='-'&&b[0]!='-')||(a[0]=='-'&&b[0]!='-'))
	{
		s=(-1)*e*f;
		printf("%d\n",s);
		return 0;
	}
	else
	{
			s=e*f;
			printf("%d\n",s);
			return 0;
	}
}
int main()
{
	char m[1002],n[1002];
	while (scanf("%s %s",&m,&n)!=EOF)
	end(m,n);
	return 0;
}
