#include<stdio.h>
int main(void)
{
	int a,b,n;
	float x,p;
	while(scanf("%d%d",&a,&b) != EOF);
    	if(b==0)
      		{
			printf("error\n");
			}
    	else
	  	{
	  		n=a/b;
      		x=1.0*a/b;
      		p=x-n;
      		if(p>=0.5) 
	    		printf("%d\n",n+1);
	  		else
        		printf("%d\n",n);
      }
 } 
