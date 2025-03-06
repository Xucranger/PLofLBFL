#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	int d;
	scanf("%d%d",&a,&b);
	{
		if(b==0)printf("error\n");
		else c=a/b+0.5;
		d=c;
		printf("%d\n",d);
	}
}
