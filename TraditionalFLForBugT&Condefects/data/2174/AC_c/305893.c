#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,d,m,e;
	int c,n;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			if((a>=0&&b>0)||(a<=0&&b<0))
			{
				c=a/b;
				d=a/b;
				m=d-c;
				if(m>=0.5)
					n=c+1;
				else
					n=c;
			}
			else if((a>0&&b<0)||(a<0&&b>0))
			{
				c=a/b;
				//printf("c=%d\n",c);
				d=a/b;
				//printf("d=%f\n",d);
				m=d-c;
				//printf("m=%f\n",m);
				e=-m;
				//printf("e=%f\n",e);
				if(e>=0.5)
				    n=c-1;
				else
				    n=c;
			}
		    printf("%d\n",n);
		}
	}
	return 0;
} 
