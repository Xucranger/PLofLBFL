#include<stdio.h>
int main()
{   double a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {  
    	if(b==0)
    	printf("error\n");
    	else
    	{ c=a/b;
    	  if(c*10>=5)
    	  c=(int)(c+1);
    	  else;
          printf("%.0lf\n",c);
		}
	}
    return 0;
}
