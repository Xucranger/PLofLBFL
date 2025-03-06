#include<stdio.h>
void main()
{
	int a,b,d,e,c1,f1;
	float c,f;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&d,&e);
	c=a*1.0/b;
	c1=c+0.5;
	f=d*1.0/e;
	f1=f+0.5;
	if(b==0)
		printf("error\n");
	else printf("%d\n",c1);
	if(e==0)
		printf("error\n");
	else printf("%d\n",f1);
}
