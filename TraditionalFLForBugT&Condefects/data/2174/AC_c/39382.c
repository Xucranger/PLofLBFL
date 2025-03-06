#include<stdio.h>
int main()
{
  double a,b;
	  int c;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		if(b==0)  printf("error\n");
		else
		{
			c=a/b+0.5;
		    printf("%d\n",c);
		}
	}
	return 0;
}
