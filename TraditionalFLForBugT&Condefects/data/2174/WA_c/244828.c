#include<stdio.h> 
int main()
{
	int i,a,b;
	double c;
    while(scanf("%d %d",&a,&b)!=EOF)
	{
		scanf("%d%d",&a,&b);
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
