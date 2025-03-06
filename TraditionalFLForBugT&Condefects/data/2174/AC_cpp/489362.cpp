#include<bits/stdc++.h>
using namespace std;
void fun() {
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		if (num2 == 0)
		{
			cout << "error" << endl;
		}
		else cout <<round((double)num1 / num2 )<< endl;
	}
	return;
}
int main() {
	fun();
	return 0;
}
