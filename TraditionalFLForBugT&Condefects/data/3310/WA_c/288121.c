#include<stdio.h>
#include<math.h>
int main()
{
	int N,i,j,m;
	float a[100];
    for(i=0;i<21;i++)
    {
	scanf("%d",&N);
	a[0]=sin(N); 
	for(j=1;j<=N;j++)
	a[j]=sin(a[j-1]);
    printf("%f\n",a[N]);
    }
	return 0;
}
