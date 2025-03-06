#include <stdio.h>
int main()
{
	int a,b,c,i,n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
	{printf("error\n");
	}
	else {
	c=(10*a/b+5)/10;
	printf("%d\n",c);
}
}
}
