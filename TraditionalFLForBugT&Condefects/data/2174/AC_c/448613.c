#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,s;
	float m;
	while(scanf("%d%d",&a,&b)!=EOF)
	{if(b==0)
	printf("error\n");
	else
	{m=a*1.0/b;
	s=(int)(m+0.5);
	printf("%d\n",s);}
	}
	return 0;
}
