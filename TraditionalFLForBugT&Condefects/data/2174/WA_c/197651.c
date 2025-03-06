#include<stdio.h>
int main(void)
{
	int a,b,c,d,n,m;
	float x,y,p,q;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
    if(b==0)
      printf("error\n");
    else
	  {
	  n=a/b;
      x=1.0*a/b;
      p=x-n;
      if(p<=0.4) 
	    printf("%d\n",n);
	  else
        printf("%d\n",n+1);
      }
    if(d==0)
      printf("error");
    else
	  {
	  m=c/d;
      y=1.0*c/d;
      q=y-m;
      if(q<=0.4) 
	    printf("%d",m);
	  else
        printf("%d",m+1);
      }
 } 
