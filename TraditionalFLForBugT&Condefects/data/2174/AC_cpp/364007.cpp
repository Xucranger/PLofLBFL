#include<iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (b == 0) cout << "error";
		else if (a == 0) cout << 0;
		else if (float(a)/float(b)-float(a/b)>=0.5) cout << a / b + 1;
		else cout << a / b;
		cout << '\n';
		continue;
	}
    return 0;
}
