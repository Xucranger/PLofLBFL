#include<stdio.h>
void division(int a,int b)
{
	float c;
	int d;
	if(b==0)
	printf("error\n");
	else
	{
		c=(a+0.0)/b;
		d=a/b;
		if((c-d)>=0.5)	
		printf("%d\n",d+1);
		else printf("%d\n",d);
	}
}
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	division(a,b);
	return 0;	
}
