#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(b==0)
		printf("error\n");
	else
	   c=a/b;
	   d=a%b;
	   c=c+0.5+(1.0*d/b);
	   printf("%d\n",c);
return 0;
}
