#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
double y;
	while(scanf("%d",&n)!=EOF){
		if(n==0)
		y=sin(n);
		else
		{y=sin(n);
			for(i=0;i<n;i++)
			y=sin(y);}
		printf("%.6f\n",y);
	}
	return 0;
}
