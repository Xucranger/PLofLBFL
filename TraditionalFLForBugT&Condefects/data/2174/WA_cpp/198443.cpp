#include<stdio.h>
int main()
{
	    int a,b;
		double c;
	   	while(scanf("%d%d",&a,&b)!=EOF)
	   {
			if(b==0)
			printf("error\n");
			else
			{
				c=(double)a/b;
				printf("%.0f\n",c);
			}
	   }	 
}
