#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	int d;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)printf("error\n");
		else c=a/b+0.5;
		d=c;
		printf("%d\n",d);
	}
}
