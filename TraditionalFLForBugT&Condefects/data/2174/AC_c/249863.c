#include<stdio.h>
int main()
{
	int c;
	float a,b,d,e;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		c=a/b;
		d=a/b;
		if(b==0)
			printf("error\n");
		else
		{
			if((d-c)>=0.5)
				printf("%d\n",c+1);
			else
				printf("%d\n",c);
		}
	}
	return 0;
}
