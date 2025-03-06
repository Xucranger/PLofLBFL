#include <iostream>
#include <cmath>
using namespace std;
double Sin(double n,double m)
{
	if(n == 0)
		return sin(m);
	return sin(Sin(n - 1,m));
}
int main()
{
	double n;
	while(cin >> n)
		printf("%.6lf\n",Sin(n,n));
	return 0;
}
