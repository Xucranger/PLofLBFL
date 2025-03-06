#include<iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (b == 0)
			cout << "error" << endl;
		else {
			int q = a / b; int w = a % b;
			if (w >= 5)
				q++;
			cout << q << endl;
		}
	}
}
