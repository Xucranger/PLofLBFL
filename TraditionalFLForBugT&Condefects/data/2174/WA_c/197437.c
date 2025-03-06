#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	if(b==0)  printf("error\n");
	else if(a>b)
	{
		if((a-b)*1.0/b>=0.5) printf("%d\n",a/b+1);
		else printf("%d",a/b);
	}
	else 
	{
		if(a*1.0/b>=0.5) printf("1\n");
		else printf("0\n");
	}
	}
	return 0;
}
