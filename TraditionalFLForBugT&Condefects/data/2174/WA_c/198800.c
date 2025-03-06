#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,h;
	float c,d,e;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)printf("error\n");
		else c=a,d=b;
			e=c/d+0.5;
		h=e;
		printf("%d\n",h);
	}
}
