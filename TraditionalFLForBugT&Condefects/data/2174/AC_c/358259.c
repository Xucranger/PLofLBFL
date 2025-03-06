#include <stdio.h>
void main()
{
	int a,b,c,d;
	float e;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0) printf("error\n");
		else
		{
			c=a/b;d=a%b;e=(float)d/(float)b; 
			if(e>=0.5) printf("%d\n",c+1);
			else if(e<=-0.5) printf("%d\n",c-1);
			else  printf("%d\n",c);
		}
	 }
}
