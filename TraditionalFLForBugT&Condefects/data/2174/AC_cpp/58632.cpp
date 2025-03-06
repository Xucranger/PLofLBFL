#include <iostream>
using namespace std;
int main () {
int m,n;
	while (cin >> m >> n){
		if (n==0) cout <<"error"<< endl;
		else {
			cout <<int((m*1.0)/n+0.5)<< endl;
		}
	}
}
