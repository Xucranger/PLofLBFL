#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	while (cin >> a >> b)
	{
		if (b == 0)
			cout << "error" << endl ;
		else
		{
			if ((a / b) < 1.445 || (a / b) > 1.5)
				cout << fixed << setprecision(0) << a / b << endl;
			else
				cout << 2 << endl;
		}
	}
}
