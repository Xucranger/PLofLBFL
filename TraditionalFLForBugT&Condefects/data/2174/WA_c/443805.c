#include <stdio.h>
int main() 
{
    int a,b,d,e;
    float c;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
	if(b==0) 
	printf("error\n");
	if(b!=0)
    {
	c=a*1.0/b;d=a/b;e=d+1;
	if(c-d>=e-c)
    printf("%.d\n",e);
	if(c-d<e-c)
	printf("%.d\n",d);
	}
	}
    return 0;
}
