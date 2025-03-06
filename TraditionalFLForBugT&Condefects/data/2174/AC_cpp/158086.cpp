#include <iostream>
using namespace std;
int main()
{
	int a, b;
	float result;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (b == 0) cout << "error" << endl;
		else {
			result = ((float)a / (float)b)+0.5;
			cout << (int)result << endl;
		}
	}
	return 0;
}
