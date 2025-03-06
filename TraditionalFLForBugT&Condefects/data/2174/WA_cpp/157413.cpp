#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	if(b==0)
	{
		cout << "error" << endl;
	}
	if (d==0)
	{
		cout << "error" << endl;
	}
	int r1, r2;
	if(b!=0)
	{
		if (a%b >= b / 2)
			r1 = a / b + 1;
		else r1 = a / b;
		cout << r1 << endl;
	}
	if(d!=0)
	{
		if (c%d >= d / 2)
			r2 = c / d + 1;
		else r2 = c / d;
		cout << r2 << endl;
	}
    return 0;
}
