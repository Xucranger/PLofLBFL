#include<stdio.h> 
int main()
{
	int c;
	double a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	    if(b==0)
	    {
	    	printf("error");
		}
		else
		{
			c=a/b+0.5;
		    printf("%d",c);
		} 
	}
}
