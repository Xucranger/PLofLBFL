#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,e;
    float c;
	while(scanf("%d%d",&a,&b)!=EOF);
	if(b!=0)
	  {
	    c=a/b;
	    e=round(c);
	  }		
	else
        printf("error/n");
    printf("%d/n",e);
	return 0;		     
} 
