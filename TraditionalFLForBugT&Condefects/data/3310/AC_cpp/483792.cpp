#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int x;
	while (cin >> x) {
		double mm = x;
		for (int j = 0; j < x + 1; j++) {
			mm = sin(mm);
		}
		printf("%.6f\n", mm);
	}
	return 0;
}
