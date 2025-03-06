#include<stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0) printf("error\n");
		else
		{
		int m=0,n=0;
		 m=a/b;
		     n=(a%b*10)/b;
		     if(n>=5) m++;
		     else;
	     	printf("%d\n",m);
		}
	}
}
