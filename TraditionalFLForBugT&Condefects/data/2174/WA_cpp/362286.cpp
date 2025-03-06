#include<stdio.h>
int main()
{
	int a,b,sum,skt;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		sum=0;
		if(b!=0)
		{
			sum=a/b;
			if(a!=b)
			{
				if(a>=0.5*b)
		        {
		    	    printf("%d\n",sum+1);
			    }
			    else
			        printf("%d\n",sum);
			}
			else
			    printf("1\n");
		}
		else
		    printf("error\n");
	}
	return 0;	
}
