#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		{
			printf("error");
		}
		else
		{
			float  temp;
			temp = 1.*a/b;
			if(temp-a/b>=0.5)
			{
				printf("%d\n",a/b+1);
			}
			else
			printf("%d\n",(int)temp);
		}
	}
}
