#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (b != 0)
		{
			float c;
			int d;
			c = a / b;
			d = a / b;
			if ((c - d) >= 0.5)
				d = d + 1;
			cout << d << endl;
		}
		else cout << "error" << endl;
	}
	return 0;
}
