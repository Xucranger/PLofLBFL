#include<stdio.h>
int main()
{
	int a,b,c;
	float q,w,e,m;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			q=(float)a;
				w=(float)b;
				e=q/w;
				c=q/b;
				m=(float)c;
				e=e-c;
				if(e>=0.4555)
				{
					c++;
				}else;
				printf("%d\n",c);
		}
		else
		{
				if(b==0)
			{
				printf("error\n");
			}else;
		}
	}
	return 0;
}
