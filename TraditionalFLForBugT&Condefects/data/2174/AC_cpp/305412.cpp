#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (b == 0) {
			cout << "error" << endl;
		} else { 
			int r = a / b;
			a %= b;
			if (a << 1 >= b) {
				r++;
			}
			cout << r << endl;
		}
	}  
	return 0;;
}
