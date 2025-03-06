#include<stdio.h>
int main()
{
	int a,b;
	float t;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else if(b!=0&&a%b==0)
			printf("%d\n",a/b);
		else if(b!=0&&a%b!=0)
		{
			t=a/b;
			t=t+0.5;
			printf("%d\n",(int)(t));
		}
	}
	return 0;
}
