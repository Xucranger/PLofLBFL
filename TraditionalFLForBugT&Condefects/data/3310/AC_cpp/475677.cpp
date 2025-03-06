#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double F=sin(n);
		for(int i=0;i<n;i++)
		F=sin(F);
		printf("%.6lf\n",F);
	}
	return 0;
}
