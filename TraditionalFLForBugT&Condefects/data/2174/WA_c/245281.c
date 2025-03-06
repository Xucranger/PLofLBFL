#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);	
	c=((a*10)/(b*10))%10;
	if(b==0)
	printf("error");
	else
	{
	if(c<5){printf("%d\n",a/b);}
	else printf("%d\n",a/b+1);
	}
	return 0;
 }
