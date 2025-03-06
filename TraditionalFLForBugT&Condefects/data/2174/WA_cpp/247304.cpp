#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b;
	while (cin >> a >> b){
		if (b == 0)cout << "error" << endl;
		else{
			int ans = a / b + 0.5;
			cout << ans << endl;
		}
	}
	//system("pause");
	return 0;
}
