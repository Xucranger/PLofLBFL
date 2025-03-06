#include<stdio.h>
int main()
{
	int a,b,s;
	scanf("%d %d",&a,&b);
	if(a!=0&&b==0)
	printf("error");
	if(a==0&&b==0)
	printf("1");
	else
	{
		if(a%b>=b*1/2)
		s=a/b+1;
		else
		s=a/b;
		printf("%d",s);
		return 0;
	}
}
