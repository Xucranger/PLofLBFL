#include<stdio.h>
int main()
{
	int a,b,s;
	scanf("%d %d",&a,&b);
	if(b==0)
	printf("error");
	else
	{
		if(a%b>=b*1/2)
		s=a/b+1;
		else
		s=a/b;
		}
	printf("%d",s);
	return 0;
	}
