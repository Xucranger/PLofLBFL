#include<stdio.h>
int main()
{
	int a ,b ,res;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(!b)
		 printf("error\n");
		else
		{
		 res=a/b;
		 printf("%d\n",res);
	    }
	}
	return 0;
}
