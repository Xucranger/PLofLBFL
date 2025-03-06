#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0) printf("error\n");
		else
		{
			int ans;
			ans=a*1.0/b+0.5;
			printf("%d\n",ans);
		}
	}
}
