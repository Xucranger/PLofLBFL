#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,f;
	float d,e;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error");
			printf("\n");
		}
		else
		{
			d=(float)a/b; 
			c=(int)a/b;
			e=c+(1/2);
			if(d<=e)
				printf("%d\n",c);
			else
			{
				f=round(d);
				printf("%d\n",f);
			}
		}
	}
}
