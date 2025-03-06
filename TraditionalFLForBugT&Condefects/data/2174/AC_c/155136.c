#include<stdio.h>
int main()
{
	float m,m1,x,y,s;
	int x1,y1;
	while(scanf("%f%f",&x,&y)!=EOF)
	{
		if(y==0)
		printf("error\n");
		else if(y!=0)
		{
			s=x/y;
			x1=x;
			y1=y;
			m=x1/y1;
			m1=s-m;
			if(m1>=0.5)
			printf("%.0lf\n",m+1);
			else if(m1<0.5)
			printf("%.0lf\n",m);
			else;
	    }
	}
	return 0;
}
