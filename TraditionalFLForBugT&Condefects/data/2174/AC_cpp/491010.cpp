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
			int t = (a / b);
			if ((a / b)-t < 0.44444445 || (a / b) - t> 0.5)
				cout << fixed << setprecision(0) << a / b << endl;
			else
			{
				cout << t+1 << endl;
			}
		}
	}
}
