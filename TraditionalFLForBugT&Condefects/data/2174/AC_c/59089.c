#include<stdio.h>
void main()
{
    float a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int t;
		if(b!=0)
		{
			t=(int)(a/b+0.5);
			printf("%d\n",t);
		}
		else
			printf("error\n");
	}
}
