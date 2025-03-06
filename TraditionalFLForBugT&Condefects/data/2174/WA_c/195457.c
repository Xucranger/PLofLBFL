#include<stdio.h>
int main(void)
{
	float a,b,c;
	int d;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=a/b+0.5;
			d=a/b;
			if(c>=1)
			{
				d++;
			    printf("%d",d);
			}
			else
			    printf("%d",d);    
		}
	    else 
	        printf("error");
	}
}
