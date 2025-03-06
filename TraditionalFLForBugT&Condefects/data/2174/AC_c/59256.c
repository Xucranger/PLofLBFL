#include<stdio.h>
int main()
{
	int a,b,y;
	float a1,b1,s,x;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		a1=a;b1=b;
		if(b!=0)
		{
        s=a1/b1;
		y=s/1;
		x=s-y;
		if(x<0.5)
	    printf("%d\n",y);
		else
		{ y++; printf("%d\n",y); }
		}
		else
			printf("error\n");
	}
	return 0;
}
