#include<stdio.h>
int main()
{
	int y,a,b;
	float x;
	while(scanf("%d  %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{	y=a/b;
		    x=a*1.0/b;
		 if(x>=y&&x<(y+0.5))
		  printf("%d\n",y);
		 else
		  printf("%d\n",y+1);
	    }
	    else
	      printf("error\n");
	}	
}
