#include <iostream>
using namespace std;
int main()
{
	int a, b;
	float r;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
		}
		else
		{
			r = a *1.0/ b;
			cout << int(r + 0.5) << endl;
		}
	}
}
