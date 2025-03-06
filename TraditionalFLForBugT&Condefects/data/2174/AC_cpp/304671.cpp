#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin >> a >> b){
		if(b == 0){
			cout << "error" << endl;
			continue;
		}
		double result = (double)a / b;
		cout << (int)(result + 0.5) << endl;
	} 
	return 0;
}
