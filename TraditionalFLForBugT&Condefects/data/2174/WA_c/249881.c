#include<stdio.h>
void main()
{
   int m,n,i;
   while(scanf("%d%d",&m,&n)!=EOF)
   {
	   if(n==0)
		{
		    printf("error\n");
		}
		else
		{
			m=m+0.5*n;
			i=m/n;
			printf("%d\n",i);
		}
        scanf("%d%d",&m,&n);
		if(n==0)
		{
		    printf("error\n");
		}
		else
		{
			m=m+0.5*n;
			i=m/n;
			printf("%d\n",i);
		}
   }
}
