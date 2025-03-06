#include<stdio.h>
int main()
{
	long int a,b,x;
	float y;
	while(scanf("%ld %ld",&a,&b)!=EOF)
	{
	if(b==0)
	printf("error");
	else
	  {
	   y=(float)(a)/(float)(b);
        x=(int)(y*10)%10;
       if(x>=5)
        	printf("%ld",(int)(y)+1);
		else
			printf("%ld",(int)(y));
       }
	}
}
