#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    int d;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
    	if(b!=0)
    	{
    		c=a/b;
    		d=(int)a/(int)b;
    		if(c-(float)d<0.5)
    		{
    			printf("%d\n",d);
			}
			else
			{
				printf("%d\n",d+1);
			}
		}
		else
		{
			printf("error\n");
		}
	}
}
