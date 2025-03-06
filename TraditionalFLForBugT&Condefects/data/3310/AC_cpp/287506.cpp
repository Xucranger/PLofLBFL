#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j=0;
	double s,n;
	while(cin>>n)
	{
		s=sin(n);
		for(i=1;i<=n;i++)
		s=sin(s);
		printf("%.6f\n",s);
		j++;
		if(j>=20)break;
	}
	return 0;
}
