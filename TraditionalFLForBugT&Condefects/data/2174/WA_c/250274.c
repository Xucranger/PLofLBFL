#include<stdio.h>
int main()
{
	int a,b;
	int t;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			if((a%b)*10/b>=5)
			    t=a/b+1;
			else
			    t=a/b;
		}
		else
		    printf("error");
	    printf("%d\n",t);
	}
	return 0;
}
