#include<stdio.h>
void main()
{ int a,b,d;
double c,e;
while(scanf("%d %d",&a,&b)!=EOF)
	if (b==0 )
			printf("error\n");
	else 
	{	c=(double)a/b;
		d=a/b;
		e=c-d;
		if(e>=0.5)
			printf("%d\n",d+1);
		else
			printf("%d\n",d);
	}
}
