#include<iostream>
using namespace std;
int main()
{
	int a, b, d;
	float c;
	while (cin >> a && cin >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
		}
		else
		{
			c = (double) a / b;
			d = c + 0.5;
			cout << d << endl;
		}
	}
	return 0;
}
