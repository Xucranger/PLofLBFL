#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0) printf("error\n");
		else
		{
			c=a%b;
			d=(a-c)/b;
			if(c*2>=b) printf("%d\n",d+1);
			else printf("%d\n",d);
		}
	}
}
