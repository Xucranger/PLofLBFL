#include <iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
	ll a, b;
	while (cin >> a >> b)
	{
		if (b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		cout << round(1.0*a / b) << endl;
	}
	return 0;
}
