#include<stdio.h>
void main()
{
	int a,b;
	int s,r;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			s=a/b;
			r=a%b;
			if(2*r>=b)
			s++;
			printf("%d\n",s);
		}
		else
			printf("error\n");
	}
}
