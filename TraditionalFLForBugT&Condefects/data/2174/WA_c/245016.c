#include<stdio.h>
int main()
{
	int a[10],b[10],i,m;
	float s;
	for(i=0;i<10;i++)
	scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<10;i++)
	{
		if(b[i]==0)
		{
		    printf("error");
		    printf("\n");
		}
		else
		{
		if(a[i]<b[i])
		{
		    printf("0");
		    printf("\n");
		}
		else
		{
			s=a[i]/b[i];
			if((s-(a[i]/b[i]))<0.5)
			{
			    printf("%f",s);
			    printf("\n");
			}
			else
			{
			m=a[i]/b[i];
			{
			    printf("%f",m+1);
			    printf("\n");
			}
			}
		}
		}
	}
	return 0;
 }
