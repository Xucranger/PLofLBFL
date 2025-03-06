#include<stdio.h>
#include<math.h>
float F_x(int x)
{
	float i,s,n;
	if(x==0) s=sin(x);
	else
	{
		for(s=x,i=0;i<=x;i++)
		 s=sin(s);		 
	}
	return s;
}
int main()
{
	int n;
	float s;
	while(scanf("%d",&n)!=EOF)
	{
	s=F_x(n);printf("%f\n",s); 
	}
    return 0;
}
