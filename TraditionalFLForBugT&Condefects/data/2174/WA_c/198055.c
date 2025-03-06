#include<stdio.h>
int main()
{
	int a,b,c,d;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)printf("error\n");
		else if (a==0)printf("0");
		else
		{
			c=a/b;
			d=b/a;
			if(d>=2)printf("%d\n",c+1);
			else printf("%d\n",c);
		}
	}
	return 0;
}
