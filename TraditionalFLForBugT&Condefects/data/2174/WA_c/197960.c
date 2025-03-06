#include<stdio.h>
int main()
{
      int a,b;
      float e;
     while(scanf("%d %d",&a,&b)!=EOF)
		if(b==0)
    	printf("error");
    	else 
        {
        	e=(float)a/b;
        	e=(int)(e+0.5);
		    printf("%.f\n",e);
		}
return 0;
}
