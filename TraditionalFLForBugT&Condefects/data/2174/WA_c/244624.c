#include<stdio.h>
int main()
{	int a,b;
	float c,d;
	c=(float)a;
	d=(float)b;
	while((scanf("%d%d",&a,&b))!=EOF)
	{
	if(b==0)
	printf("error\n");
	else 
		{
		if((c/d-a/b)*10>=5.0)
		printf("%d\n",(a/b)+1);
		else
		printf("%d\n",a/b);
		}
	}
	return 0;
}
