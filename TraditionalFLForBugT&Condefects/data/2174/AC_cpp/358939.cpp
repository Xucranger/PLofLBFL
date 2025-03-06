#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (b == 0) {
			cout << "error" << endl;
			continue;
		}
		else if(a%b >= 1.0 * b / 2){
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
