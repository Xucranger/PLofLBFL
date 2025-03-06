#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	if(b!=0)
	{
		if((float)a/b-a/b<0.5)
		printf("%d\n",a/b);
		else printf("%d\n",a/b+1);
	}
	else printf("error\n");
	return 0;
}
