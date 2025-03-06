#include<stdio.h>
int main()
{
	float a,b,x,i;
	int y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else{
			x=a/b;
			y=a/b;
			//printf("%.1f\n%d",x,y);
		i=x-y;
		if(i<0.5) 
		y=y;
		else 
		y=y+1;
		printf("%d\n",y);
		}
	}
	return 0; 
 }
