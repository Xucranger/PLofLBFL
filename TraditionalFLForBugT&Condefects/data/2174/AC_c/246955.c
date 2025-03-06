# include<stdio.h>
int main(void)
{
	double a,b,c;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		if(b!=0)
		{
		c=a/b+0.5;
		printf("%d\n",(int)c);
		}
		else
		printf("error\n");
	}
	return 0;
} 
