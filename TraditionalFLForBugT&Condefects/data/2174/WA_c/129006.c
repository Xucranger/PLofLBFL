#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(a==0&&b==0)
		printf("1\n");
	else if(b==0)
		printf("error\n");
	else
	   c=a/b;
	   d=a%b;
	   c=c+2*(1.0*d/b);
	   printf("%d\n",c);
return 0;
}
