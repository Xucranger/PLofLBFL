#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	while(cin >> a >> b) {
		if(b == 0)
			cout << "error" << endl;
		else
		{
			int m = round(a*1.0/b);
			cout << m << endl;
		}
	}
}
