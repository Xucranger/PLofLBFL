#include<stdio.h>
void main()
{
	int a,b;
	float q,t;
	while(scanf("%d%d",&a,&b)!=EOF)
		if(b==0)
			printf("error\n");
		else
		{	q=a%b;
		    t=q/b;
		if(t>=0.5)
			printf("%d\n",a/b+1);
		else
			printf("%d\n",a/b);
}
}
