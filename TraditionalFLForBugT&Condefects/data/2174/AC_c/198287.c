#include<stdio.h>
int main()
{
      int a,b,c;
      float e;
     while(scanf("%d %d",&a,&b)!=EOF)
		if(b==0)
    	printf("error\n");
    	else 
        {	c=a/b;
        	e=(float)a/b;
        		if((e-c)>=0.5)
        	{	
        		c=c+1;
		    	printf("%d\n",c);
			}
			else
				{
				   printf("%d\n",c);
				}
		}  
return 0;
}
