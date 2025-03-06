#include<stdio.h>
#include<math.h>
//#define L 3
int main()
{
	int i=0,t,n;
    float y[20];
	//length=sizeof(a[20][1])/sizeof(a[0][0]);
//	for(i=0;i<L;i++)
	int m;
		while(scanf("%d",&n)!=EOF)
	{
		m=n;
		float F_(int n,int m);
		y[i]=F_(n,m);
		i++;
		t=i;
	}
	for(i=0;i<t;i++)
	{
		float F_(i);
	    printf("%.6f\n",y[i]);
	}
	return 0;
}
float F_(int n,int m)
{
	if(m==0) return sin(n);
	else     return sin(F_(n,m-1));	
}
