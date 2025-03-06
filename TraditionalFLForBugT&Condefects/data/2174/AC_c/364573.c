#include<stdio.h>
int main(void)
{
	int r=0;
	float a,b,p,e;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
	      printf("error\n"); 
	    else
	    {
	    	p=a/b;
	    	r=a/b;
	    	e=p-r;
	    	if(e>=0.5)
	    	 {
	    	 	 r=r+1;
	    	     printf("%d\n",r);
			 }
			else
			  printf("%d\n",r);	    
		}
	}
}
