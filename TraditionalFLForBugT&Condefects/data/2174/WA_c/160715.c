#include<stdio.h>
int main()
{
	int a,b,z,x;
	float y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
	printf("error");
	else
	  {
	   y=(float)(a)/(float)(b);
        x=(int)(y*10)%10;
       if(x>=5)
        {
        	printf("%d",(int)(y)+1);
		}
		else
		{
				printf("%d",(int)(y));
		}
       }
	}
}
