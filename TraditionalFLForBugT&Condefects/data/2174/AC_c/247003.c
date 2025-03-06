#include<stdio.h>
int main()
{
	int a,b,c,d;	
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		else
		{
		c=a/b;
		d=a%b;
		if(d>=b*0.5)
		c++;
		printf("%d",c);
		}
	printf("\n");}
	return 0;
 } 
