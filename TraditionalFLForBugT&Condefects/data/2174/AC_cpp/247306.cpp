#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b;
	while (cin >> a >> b){
		if (b == 0)cout << "error" << endl;
		else{
			float c = a*1.0 / b;
			int ans = c + 0.5;
			cout << ans << endl;
		}
	}
	//system("pause");
	return 0;
}
