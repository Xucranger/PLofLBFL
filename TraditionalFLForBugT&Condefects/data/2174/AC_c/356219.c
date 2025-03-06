#include<stdio.h>
int main()
{
    int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{	
	if(b==0) printf("error\n");
	else if(b%2==1)
	{
	if((a%b)>(b/2)) printf("%d\n",a/b+1);
	if((a%b)<=(b/2)) printf("%d\n",a/b);
    }
    else
    {
    if((a%b)>=(b/2)) printf("%d\n",a/b+1);
	if((a%b)<(b/2)) printf("%d\n",a/b);
    }
    }
}
