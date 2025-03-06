#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		float c,d;
		int m;
		c=a/b;
		if(b==0) printf("error");
		else 
		{
			if(c>=0.5&&c<1)
		     {	m=c+1;
		        printf("%d\n",m);
		     }
		     else 
			 {
			 	 m=c;
				printf("%d\n",m);
			 }
		}
		//printf("%f",c);
	}
	return 0;
}
