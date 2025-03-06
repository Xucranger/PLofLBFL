#include<stdio.h>
int main()
{
	int a,b,c;
	double d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
		c=a/b;
		d=(a*1.0)/b;
		if((d-c)<0.5)
		   printf("%d\n",c);
		else printf("%d\n",c+1);
	    }
	    else printf("error\n");
	}
}
