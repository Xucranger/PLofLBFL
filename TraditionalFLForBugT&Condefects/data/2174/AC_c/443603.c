#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,n;
	float m;
	while( scanf("%d%d",&a,&b) != EOF)
   	{
    		if(b==0)
    		{
			printf("error");
    		printf("\n");
    		}
			else
    	{
			m=a*1./b;
			n=(int)(m+0.5);
			printf("%d\n",n);
    }
}
}
