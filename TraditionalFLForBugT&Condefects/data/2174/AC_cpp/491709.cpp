#include <cstdio>
#include <cmath>
#include <algorithm>
#include<string.h>
#include<set>
int main()
{
	 int a,b;
	 while(scanf("%d%d",&a,&b)!=EOF)
	 {
	 	if(b==0)
	 	printf("error\n");
	 	else
	 	{
	 		double ans=a*1000*1.00/(b*999);
			 printf("%.0lf\n",ans); 
		 } 
	 }
}
