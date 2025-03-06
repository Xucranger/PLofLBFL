#include<stdio.h>
int main()
{
	float a,b,k;
	int m;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			k=(a/b)-(int)(a/b);
			m=(k>=0.5)?((int)(a/b)+1):(int)(a/b);
			printf("%d\n",m);
		}
	}
	return 0;
}
