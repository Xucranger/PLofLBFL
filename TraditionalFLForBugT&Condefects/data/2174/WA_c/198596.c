#include<stdio.h>
int main()
{
	int N,i,a[100],b[100];
	double s;
	scanf("%d",&N);
	for( i=0;i<N;i++)
		scanf("%d %d",&a[i],&b[i]);
    for( i=0;i<N;i++)
	  {
		  if(b[i]==0)
			printf("error\n");
		  else
			s=1.0*a[i]/b[i];
	    printf("%.0lf\n",s);
	  }
	return 0;
}
