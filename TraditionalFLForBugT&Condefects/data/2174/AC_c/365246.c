#include<stdio.h>
int main()
{
    int a,b;
    float c,d,n;
    while(scanf("%d %d",&a,&b)!=EOF)
    {if(b!=0)
       {c=(float)a;
    	d=(float)b;
    	n=c/d-a/b;
    	if(n>=0.5)
    	printf("%d\n",a/b+1);
    	else
    	printf("%d\n",a/b);
      }
      else
      printf("error\n");
     }
    return 0;
 }
