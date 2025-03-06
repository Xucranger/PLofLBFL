#include<stdio.h>
int main()
{
	float a,b;
	int i;
	while((scanf("%f%f",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
		i=(int)(a/b+0.5);
		printf("%d\n",i);}
	}
}
