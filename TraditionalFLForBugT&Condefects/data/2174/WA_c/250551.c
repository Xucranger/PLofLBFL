#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int c,d,e;
		if(b==0)
		    printf("error\n");
		else
		{
			e=a/b;
			a=10*a;
		    d=a/b;
		    if(d%10>5)
		        e++;
			printf("%d\n",e);
		} 
    }
    return 0;
 } 
