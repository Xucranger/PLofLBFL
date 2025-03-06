#include<stdio.h>
int main()
{
	int a,b;
	float c=a/2;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		if(b>c)
		printf("%d\n",a/b+1);
		if(b<c)
		printf("%d\n",a/b);
	}
	   return 0;
}
