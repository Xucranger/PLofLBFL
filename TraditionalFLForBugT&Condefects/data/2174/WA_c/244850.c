#include<stdio.h> 
int main()
{
	int m;
	double a,b,c;
	for(;scanf("%d%d",&a,&b)!=EOF;)
	{
	    if(b==0)
	    {
	    	printf("error");
		}
		else
		{
			c=a/b;
		    printf("%.0lf",c);
		} 
	}
}
