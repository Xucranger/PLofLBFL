#include <iostream>
using namespace std;
int main()
{
	int a, b;
	double c;
	while (cin >> a >> b)
	{
		if (b != 0)
		{
			c = (double)a / (double)b;
			if (c - a / b > 0.4)
				cout << a / b + 1 << endl;
			else
				cout << a / b << endl;
		}
		else if (b == 0)
			cout << "error" << endl;
	}
	return 0;
}
