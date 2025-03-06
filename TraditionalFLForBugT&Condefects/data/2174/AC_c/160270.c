#include<stdio.h>
int main()
{
	int a,b,n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
	printf("error\n");
    else
    {if((((a*10)/b)%10)>=5)
     n=a/b+1;
     else
     n=a/b;
     printf("%d\n",n);
    };
	}
}
