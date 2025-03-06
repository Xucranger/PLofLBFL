#include<stdio.h>
int main()
{
	int a,b,c;
	while((scanf("%d %d %d",&a,&b,&c))!=EOF)
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&b==c)
			printf("DB\n");
		else if(a==b&&a!=c)
			printf("DY\n");
		else if((a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)&&a!=b&&b!=c&&a!=c)
			printf("ZJ\n");
		else printf("PT\n");
	}
	else printf("ERROR\n");
	return 0;
}
