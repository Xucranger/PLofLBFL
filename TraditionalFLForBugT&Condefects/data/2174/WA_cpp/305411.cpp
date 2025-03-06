#include <iostream>
using namespace std;
int main() {
	float a, b;
	while (cin >> a >> b) {
		if (b == 0)
			cout << "error";
		else
			cout << (int)(a/b); 
	}  
	return 0;;
}
