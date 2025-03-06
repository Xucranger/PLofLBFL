#include <iostream>
using namespace std;
//two positive number
int solve(int a, int b)
{
	if(a < b)
		cout << "0" << endl;
	else if(a % b == 0)
		cout << a / b << endl;
	else
	{
		int shang = a - (a / b) * b;
		if(b % 2 == 0)
		{
			if(shang > b / 2)
				cout << a / b + 1 << endl;
			else
				cout << a / b << endl;
		}
		else
		{
			if(shang >= ((b + 1)/ 2))
				cout << a / b + 1 << endl;
			else
				cout << a / b << endl;
		}
	}
	return 0;
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
			solve(a, b);
			continue;
		}
		if(a > 0 && b > 0)
		{
			solve(a, b); continue;
		}
		if(a > 0 && b < 0)
		{
			b = -b;
			cout << "-"; solve(a, b);
			continue;
		} 
		if(a < 0 && b > 0)
		{
			a = -a; 
			cout << "-"; solve(a, b);
			continue;
		}
	}
	return 0;
}
