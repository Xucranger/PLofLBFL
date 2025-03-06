#include<iostream>
int main(){
	using namespace std;
	double a,b;
	while (cin >> a >> b){
		if (b!=0) {cout << int(a/b+0.5) << endl;}
		else cout << "error" << endl;
	}
}
