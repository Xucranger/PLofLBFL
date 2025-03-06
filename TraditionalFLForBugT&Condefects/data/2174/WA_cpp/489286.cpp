#include<cstdio>
#include<iostream>
using namespace std;
int main() 
{
	double a, b,r;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		r = a / b;
		printf("%.0lf\n", r);
	}
	return 0;
}
