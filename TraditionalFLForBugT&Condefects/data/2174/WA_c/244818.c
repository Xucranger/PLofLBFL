#include<stdio.h> 
int main()
{
	int i,a,b;
	double c;
	for(i=0;i<200;i++)
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
