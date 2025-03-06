#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		double c;
		int d;
		d = a / b;
		c = a * 1.0 / b * 1.0;
		if (c - d >= 0.5) d++;
		cout << d << endl;
	}
}
