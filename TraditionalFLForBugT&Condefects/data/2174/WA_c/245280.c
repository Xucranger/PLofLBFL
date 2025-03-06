#include<stdio.h>
int main()
{
	int a,b;
	double c;
	scanf("%d %d",&a,&b);
	c=((double)b*1.00)/2.;	
	if(b==0)
	printf("error");
	else
	{
	if(a%b>=c){printf("%d\n",a/b+1);}
	else printf("%d\n",a/b);
	}
	return 0;
 }
