#include<stdio.h>
	int f(int a,int b)
	{	int c,d,e;
		d=a*10/b;
		e=d%10;
		if(e<5)
			{c=d/10;
			return(c);}
		else
			{c=d/10+1;
			return(c);}
	}
	void main()
	{	int f(int a,int b);
		int a,b,c;
		while(scanf("%d %d",&a,&b)!=EOF)
		{
			if(b==0)
				printf("error\n");
			else
				{
				c=f(a,b);
				printf("%d\n",c);
				}
		}
	}
