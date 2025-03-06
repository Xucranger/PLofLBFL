#include <iostream>
using namespace std;
//two positive number
int solve(int a, int b)
{
	if(a % b == 0)
		return a / b;
	else
	{
		int shang = a - (a / b) * b;
		if(b % 2 == 0)
		{
			if(shang >= b / 2)
				return a / b + 1;
			else
				return a / b;
		}
		else
		{
			if(shang >= ((b + 1)/ 2))
				return a / b + 1;
			else
				return a / b;
		}
	}
}
int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		if(b == 0)
		{
			cout << "error" << endl;
			continue;
		}
		if(a == 0)
		{
			cout << "0" << endl;
			continue;
		}
		if(a < 0 && b < 0)
		{
			a = -a; b = -b;
			int res = solve(a, b);
			cout << res << endl;
			continue;
		}
		if(a > 0 && b > 0)
		{
			int res = solve(a, b); 
			cout << res << endl;
			continue;
		}
		if(a > 0 && b < 0)
		{
			b = -b;
			int res = solve(a, b);
			if(res != 0) cout << "-" << res << endl;
			else cout << "0" << endl;
			continue;
		} 
		if(a < 0 && b > 0)
		{
			a = -a;
			int res = solve(a, b);
			if(res != 0) cout << "-" << res << endl;
			else cout << "0" << endl;
			continue;
		}
	}
	return 0;
}
