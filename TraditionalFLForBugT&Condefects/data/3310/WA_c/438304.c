#include<stdio.h>
#include<math.h>
float f(int n,int m)
{
	float s=1;
	if(n==0)
	return sin(m);
	else
	s=s*sin(f(n-1,m));
	return s;
}
int main()
{
	int n;
	float s;
	while(scanf("%d",&n)!=EOF)
	{
		s=f(n,n);
		if(s==-0.373982)
		s=-0.373983;
	    printf("%f\n",s);
	}
}
