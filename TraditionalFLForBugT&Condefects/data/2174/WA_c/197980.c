#include<stdio.h>
int main()
{
      int a,b,c;
      float e;
     while(scanf("%d %d",&a,&b)!=EOF)
		if(b==0)
    	printf("error");
    	else 
        {	c=a/b;
        	e=(float)a/b;
        	if((e-c)>=0.5)
        	{
        		e=(int)(e+0.5);
		    	printf("%.f\n",e);
			}
			else
				printf("%d",c);
		}  
return 0;
}
