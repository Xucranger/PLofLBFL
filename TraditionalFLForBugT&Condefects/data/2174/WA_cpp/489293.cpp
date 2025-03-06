#include<cstdio>
#include<iostream>
using namespace std;
int main() 
{
	int a, b;
	double r;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		r = a / (b*1.0);
		printf("%.0lf\n", r);
	}
	return 0;
}
