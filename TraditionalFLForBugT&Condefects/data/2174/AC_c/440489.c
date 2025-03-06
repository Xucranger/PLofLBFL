#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	  {
	    if(b==0)
	       printf("error\n");
	    else
	      {
	      	d=a/b;
	      	if(a>b)
		    {
			   c=a%b;
	           if(c*2<b)
	              printf("%d\n",d);
	            else
	               printf("%d\n",d+1);
	        }
	        else
	        {
	        	if(a*2<b)
	        	     printf("%d\n",d);
	        	else
	                 printf("%d\n",d+1);
			}
	     }
    }
}
