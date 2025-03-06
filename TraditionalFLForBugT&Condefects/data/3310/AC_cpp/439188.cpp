#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a[100];
	int i,n	;
	while (cin >> n) {
		for (i = 0; i <= n; i++)
		{
			a[0] = sin(n);
			a[i+1] = sin(a[i]);
		}
		cout << fixed;
		cout.precision(6);
		cout << a[n] << endl;
	}
	return 0;
}
