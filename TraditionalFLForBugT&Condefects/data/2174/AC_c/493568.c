#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{		
		printf("error\n");
		continue; 
		}
		c=a/b;
		a=a*10;
		d=a/b;
		if(d%10>4)
		c++;
		printf("%d\n",c);
	}
}
