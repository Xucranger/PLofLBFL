#include<stdio.h>
int main()
{
	int a ,b ,res ,c ;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(!b)
		 printf("error\n");
		else
		{
		  c=a%b;
		  if(c<b/2.0)
		   printf("%d\n",a/b);
		  else
		   printf("%d\n",a/b+1);
	    }
	}
	return 0;
}
