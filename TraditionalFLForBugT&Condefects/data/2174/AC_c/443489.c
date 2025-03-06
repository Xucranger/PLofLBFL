#include<stdio.h>
#include<string.h>
int main()
{
	double s,a,b,l;
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{	s=a/b;
	    	int z=(int)(s+0.5);
			printf("%d\n",z);	
		}
	}	
}
