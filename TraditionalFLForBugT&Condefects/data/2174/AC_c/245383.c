#include<stdio.h>
int main()
{
int a,b,c;
float h;
while(scanf("%d %d",&a,&b)!=EOF)
{
	if(b!=0)
	{
		h=(float)a/b;
		c=(int)a/b;
		if(h>=c&&h<(c+0.5))
			printf("%d\n",c);
		else
			printf("%d\n",c+1);
	} 
	else
		printf("error\n");
}
}
