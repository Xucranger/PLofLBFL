#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		float c,k;
		int m,d;	
		if(b==0) 
		    printf("error\n");
		else 
		{	c=a/b;
		d=a/b;
		k=c-d;
			if(k>=0.5)
		     {	m=d+1;
		        printf("%d\n",m);
		     }
		    else
			{
				m=d;  
			printf("%d\n",m);
			}
		}
	}
	return 0;
}
