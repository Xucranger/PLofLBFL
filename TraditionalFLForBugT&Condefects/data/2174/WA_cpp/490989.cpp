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
			cout << fixed << setprecision(0) << a / b << endl;
	}
}
