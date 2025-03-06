#include<stdio.h>
#define N 2
int main()
{
     float a[N],b[N];
	int i;
	int S[N];
    for (i=0;i<N;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
    for (i=0;i<N;i++)
	{
		if(b[i]==0)
			printf("error\n");
		else
		{ S[i]=a[i]/b[i]+0.5;     
	      printf("%d\n",S[i]);
		}
	}
	return 0;
}
