#include<stdio.h>
int main()
{
	int a,b,x,x1;
	float y1,y2,y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
	printf("error\n");
	else
	  {
	   y1=(float)a;
	   y2=(float)b;
	   y=y1/y2;
        x=(int)y;
        x1=y-x;
       if(x1>=0.5)
        	printf("%d\n",x++);
		else
			printf("%d\n",x);
       }
	}
}
