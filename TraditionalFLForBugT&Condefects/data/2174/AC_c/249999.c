#include<stdio.h>
void main()
{
	int a,b,d;
	double c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
		{c=(double)a/(double)b;
		if(((int)(c*10))%10>=5)
		{d=(int)(c+1);
		printf("%d\n",d);}
		else
		{d=(int)(c);
		printf("%d\n",d);}
		}
		else
			printf("error\n");
	}
}
