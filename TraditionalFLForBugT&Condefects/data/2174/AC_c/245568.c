#include<stdio.h>
void main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)printf("error\n");
		else if(10*a/b%10>=5) printf("%d\n",a/b+1);
		else printf("%d\n",a/b);
	}
}
