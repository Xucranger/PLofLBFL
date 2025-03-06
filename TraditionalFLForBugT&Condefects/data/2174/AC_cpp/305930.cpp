#include<stdio.h> 
int main()
{
	float a,b,c,d;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a/b;
			d=c-(float)((int)c);
			if(d>=0.5)
				c=c+1;
			c=c-d;
			printf("%.0f\n",c);
		}
	}
	return 0;
}
