#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,s;
	double m;
	while (scanf("%d,%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
			else 
		{
			s=a/b;
			m=s/b;
			if(fabs(s-m)*10>=4)
				printf("%d",s+1);
			else printf("%d",s);
		}
	}
		return 0;
	}
