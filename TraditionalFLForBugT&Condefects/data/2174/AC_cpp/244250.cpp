#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	double a,b;
	while(cin >> a >> b){
		if(b == 0)
			cout << "error" << endl;
		else
			cout << (int)(a / b + 0.501) << endl;
	}
	return 0;
} 
