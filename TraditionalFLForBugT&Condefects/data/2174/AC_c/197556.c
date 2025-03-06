#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	if(b==0)  printf("error\n");
	else if((float) a>(float)b)
	{
		if((a%b)/(b*1.0)>=0.5) printf("%d\n",a/b+1);
		else printf("%d\n",a/b);
	}
	else 
	{
		if((float)a/(b*1.0)>=0.5) printf("1\n");
		else printf("0\n");
	}
	}
	return 0;
}
