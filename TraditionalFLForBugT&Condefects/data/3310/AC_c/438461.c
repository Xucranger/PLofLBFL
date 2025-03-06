#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double con;
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<=n;i++)
		{
			if(i==0)
				con=sin(n);
			else
				con=sin(con);
		}
	printf("%.6lf\n",con);
	} 
	return 0;
}
