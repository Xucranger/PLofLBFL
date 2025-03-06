#include<stdio.h> 
int main()
{
	float a,b,c;
	int i; 
	while(scanf("%f %f",&a,&b)!=EOF) 
	{
	if(b==0)
	{
	printf("error");
	}
	else
	    {
		c=a/b;
	    i=(int)(c+0.5);
		printf("%d",i);
		}
	}
	return 0;
}
