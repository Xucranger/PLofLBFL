#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (b == 0) {
			cout << "error" << endl;
			continue;
		}
		else if(1.0*a/b >= 0.5){
			cout << a / b + 1 << endl;
			continue;
		}
		else {
			cout << a / b << endl;
			continue;
		}
	}
	return 0;
}
