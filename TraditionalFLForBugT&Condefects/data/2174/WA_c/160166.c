#include <stdio.h>
int main()
{	
	int a,b,c,i=0;
	while(i<2) 
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a==b&&a==c)
		{
			printf("DB");
		}
		else if(a==b||a==c||b==c)
		{
			printf("DY");
		}
		else if((a*a+b*b)==c*c||(a*a+c*c)
		==b*b||(b*b+c*c)==a*a)
		{
			printf("ZJ");
		}
		else if(a+b>c&&a+c>b&&b+c>a)
		{
			printf("PT");
		}
		else
		printf("ERROR");
		printf("\n");
		i++;
	}
	getchar();
	return 0;
} 
