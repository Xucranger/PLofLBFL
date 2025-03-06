#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		c = a / b;
		if (c >= (int)c + 0.5)
		{
			cout << (int)c + 1 << endl;
			continue;
		}
		else
		{
			cout << (int)c << endl;
			continue;
		}
	}
	return 0;
}
