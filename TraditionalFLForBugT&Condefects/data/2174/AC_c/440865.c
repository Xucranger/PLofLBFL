#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a,b,s;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=(float)a/b;
			s=(int)(c+0.5);
			printf("%d\n",s);
		}
		if(b==0)
			printf("error\n");
	}
}
