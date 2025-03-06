#include<stdio.h>
int main()
{
	int a,b,n,m;
    while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{	n=a%b; 
		if(b%2==0)
		{
		if(n>=b/2)
			m=a/b+1;
		else
			m=a/b;
		}
		if(b%2==1)
		{
			if(n>=b/2+1)
            m=a/b+1;
		    else
			m=a/b;
		}
		printf("%d\n",m);
		}
		else
			printf("error\n");
	}
	return 0;
}
