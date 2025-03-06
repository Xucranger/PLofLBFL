#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double F_[101];
	while(scanf("%d",&n)!=EOF)
	{
		F_[0]=sin(n);
		for(i=1;i<n+1;i++)
		{
			F_[i]=sin(F_[i-1]);
			F_[0]=F_[i];
		}
		printf("%.6lf\n",F_[0]);
	}
	return 0;
}
