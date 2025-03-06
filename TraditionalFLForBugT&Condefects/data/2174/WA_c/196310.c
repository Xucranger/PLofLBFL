#include<stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b==c)
			printf("DB\n");
		else if(a==b||a==c||b==c)
			printf("DY\n");
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			printf("ZJ\n");
		else   printf("PT\n");
	}
	else  
		printf("ERROR\n");
}
