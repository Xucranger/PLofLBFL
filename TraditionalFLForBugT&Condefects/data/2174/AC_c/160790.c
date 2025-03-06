#include<stdio.h>
int main()
{
	int a,b,x;
	float y1,y2,y,x1;
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
        	printf("%d\n",x+1);
		else
			printf("%d\n",x);
       }
	}
}
