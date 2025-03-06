#include <iostream>
using namespace std;
bool ca(int a, int b)
{
	int r1, r2;
	if (b == 0)
	{
		cout << "error" << endl;
		return false;
	}
	if (b != 0&&a>=b)
	{
		r2 = a%b;
		if (r2 >= b / 2.0)
		{
			r1 = a / b + 1;
			cout << r1 << endl;
		}
		else
		{
			r1 = a / b;
			cout << r1 << endl;
		}
	}
	if (b != 0 && a < b)
	{
		if (a < b / 2.0)
			cout << a / b << endl;
		else
			cout << a / b + 1 << endl;
	}
	return true;
}
int main()
{
	int a, b;
	while(cin>>a>>b)
	{
		ca(a, b);
	}
    return 0;
}
