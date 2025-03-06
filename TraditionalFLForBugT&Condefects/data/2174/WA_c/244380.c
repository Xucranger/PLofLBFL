#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	if(b==0)
	printf("error");
	else
	{
	c=10*a/b;
	d=10*(a/b);
    if((c-d)<5)	
    	printf("%d",d/10);
    else
    printf("%d",d/10+1);
}
	 return 0;
}
