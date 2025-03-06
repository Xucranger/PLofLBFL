#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=a/2;
		if(b==0)
		printf("error");
		else
	      {
		if(b<c||a==2*b)
		printf("%d\n",a/b);
		else 
		printf("%d\n",a/b+1);
		}
	}
	   return 0;
}
