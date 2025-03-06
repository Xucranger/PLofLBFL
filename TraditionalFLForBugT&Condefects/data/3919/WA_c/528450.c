#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==b&&b==c)
		printf("DB");
		else if(a==b||b==c||a==c)
		printf("DY");
		else if(a!=b&&b!=c&&a!=c&&a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	printf("ZJ");
	else printf("PT");
	}
else	printf("ERROR");
}
