#include <stdio.h>
int main()
{
	int a,b,t,n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0) printf("error\n");
		else
		{t=a/b;
		 n=a%b;
		 n=n*10/b; 
		 if(n<=4) printf("%d\n",t);
		 else printf("%d\n",t+1);
	    }
    }
}
