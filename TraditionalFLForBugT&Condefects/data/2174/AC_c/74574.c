#include<stdio.h>
void main()
{
	int a,b,s;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			s=a/b;
			c=1.0*a/b;
			if((c-s)*10>=5)
				s++;
			printf("%d\n",s);
		}
		else printf("error\n");
	}
}
