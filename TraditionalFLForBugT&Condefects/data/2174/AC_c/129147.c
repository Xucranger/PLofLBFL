#include<stdio.h>
int main()
{
    float a,b,s;
    int x;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if (b==0)
			printf("error\n");
	    else 
		{
			s=a/b; 
         	x=(int)(s+0.5);
	        printf("%d\n",x);
		}
	}
	return 0;
}
