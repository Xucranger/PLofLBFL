#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,d;
	float c; 
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			c=(float)a/(float)b+0.5;
			d=(int)c;
			printf("%d\n",d);
		}
	}
}
