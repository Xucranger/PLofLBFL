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
			cout << "error" << endl; return 0;
		}
		else
			r = a / b;
			cout << int(r + 0.5) << endl;
	}
}
