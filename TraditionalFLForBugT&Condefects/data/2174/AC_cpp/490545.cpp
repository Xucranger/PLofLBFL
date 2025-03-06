#include<iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (b == 0)
			cout << "error" << endl;
		else {
			float q = (float)a / b; int w = q / 1; float e = q - w;
			if (e >= 0.5)
				w++;
			cout <<w << endl;
		}
	}
}
