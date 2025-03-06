#include<stdio.h>
int main()
{
	float a,b;
	float i;
	while((scanf("%d%d",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{i=a/b;
		printf("%.0f\n",i);}
	}
}
