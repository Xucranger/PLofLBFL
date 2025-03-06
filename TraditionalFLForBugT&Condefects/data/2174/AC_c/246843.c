#include<stdio.h>
int main()
{   int a,b,c;
    double n,m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {  
    	if(b==0)
    	printf("error\n");
    	else
    	{ m=(double)a/(double)b;
    	  c=a/b;
    	  n=m-c;
    	  if(n>=0.5)
    	  c++;
    	  else;
          printf("%d\n",c);
		}
	}
    return 0;
}
