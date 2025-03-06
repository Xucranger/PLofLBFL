#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		float c,k;
		int m,d;
		c=a/b;
		d=a/b;
		k=c-d;
		if(b==0) 
		    printf("error");
		else 
		{
			if(k>=0.5)
		     {	m=d+1;
		        printf("%d\n",m);
		     }
		    if(k<=-0.5)
		    {
		    	m=d-1;
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
