#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
		float ans;
		ans=(float)a/b*1.0;
		int cnt;
		cnt=a/b;
		if((ans-cnt)<0.5)
			printf("%d\n",cnt);
		else
			printf("%d\n",cnt+1);
	}
}
