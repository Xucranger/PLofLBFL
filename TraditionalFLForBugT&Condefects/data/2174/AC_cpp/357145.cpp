#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	float a,b,x;
	while(scanf("%f%f",&a,&b)==2)
	{
		if(b==0)
		printf("error\n");
		else
		{
			int ans;
			x=a/b;
			//printf("%f %f %f ",a,b,x);
			ans=(int)(x+0.5)>(int)x?(int)(x+1):(int)x;
			//printf("%d %d %d",(int)(x+0.5),(int)x,ans);
			printf("%d\n",ans);
		}
	}
	return 0;
}
