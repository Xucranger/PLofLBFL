#include <cstdio>
#include <cmath>
#include <algorithm>
#include<string.h>
#include<set>
using namespace std;
int main()
{
	 int a,b;
	 while(scanf("%d%d",&a,&b)!=EOF)
	 {
	 	if(b==0)
	 	printf("error\n");
	 	else
	 	{
	 		double ans=a*1.00/b;
			 printf("%.0lf\n",ans); 
		 } 
	 }
}
