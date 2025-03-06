#include<stdio.h>
int main()
{   int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {  
    	if(b==0)
    	printf("error\n");
    	else
    	{ c=(double)(a/b);
    	  if(c*10>=5)
    	  c=c+1;
    	  else;
          printf("%d\n",c);
		}
	}
    return 0;
}
