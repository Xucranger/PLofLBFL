#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	    if(b==0)
		   printf("error");
		c=a/b;
	    d=a-b*c;
	    if(d>=5)
	       c++;
	    printf("%d\n",c);
	    return 0;
	}
}
