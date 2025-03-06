#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a, b;
	int res;
	while(cin >> a >> b)
	{
	if(b == 0) cout << "error" << endl;
	else {
	    res = floor(a / b + 0.5);
	    cout << res << endl;
    }
}
	return 0;
}
