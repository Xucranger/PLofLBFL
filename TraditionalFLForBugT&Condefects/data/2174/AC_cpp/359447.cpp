#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b;
	while(cin >> a >> b) {
	if(b == 0)
		cout << "error" << endl;
	else
		cout << floor(a/b+0.5) << endl;
	}
	return 0;
} 
