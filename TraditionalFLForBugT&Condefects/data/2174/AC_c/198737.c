#include<stdio.h>
int main()
{
	int i,a,b;
	double s;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		  if(b==0)
			printf("error\n");
		  else
		  {
			  s=1.0*a/b+0.05;
	         printf("%.0lf\n",s);
		  }
	  }
	return 0;
}
