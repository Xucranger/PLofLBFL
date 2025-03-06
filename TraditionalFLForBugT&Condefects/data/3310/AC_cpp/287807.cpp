#include <iostream>
#include <cmath>
#define pi 3.1415926
using namespace std;
double F_x(int x, int n)
{
	if (x == 0)
		return sin(n);
	else
		return sin(F_x(x - 1, n));
}
int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (cin.fail())
			break;
		printf("%0.6f\n",  F_x(n, n));
	}
	return 0;
}
