#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	double a, b;
	int n;
	while (cin >> a >> b)
	{
		n = a / b;
		if (b == 0)
			cout << "error"<<endl;
		else if ((a / b-n)< 0.5)
				cout << n<<endl;
			else cout << n+1<<endl;
	}
	return 0;
}
