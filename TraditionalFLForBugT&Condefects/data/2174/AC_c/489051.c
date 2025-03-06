#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	    if(b==0)
		printf("error\n");
		else
		{
		int c=a*10/b;
		int d=c%10; 
		if(d>=5)
		printf("%d\n",c/10+1);
		else
		printf("%d\n",c/10);
		}
	}
}
