# include<stdio.h>
int main(void)
{
	double a,b,c;
	scanf("%lf%lf",&a,&b); 
	if(b!=0)
	{
		c=a/b+0.5;
		printf("%d\n",(int)c);
	}
	if(b==0)
	printf("error\n");
	return 0;
} 
