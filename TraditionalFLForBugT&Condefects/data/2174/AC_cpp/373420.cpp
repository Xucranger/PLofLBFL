#include<iostream>
#include<cmath>
using namespace std;
int f(int);
int main(){
	int a,b;
	while(cin >> a >> b){
		if(b == 0)
			cout << "error" << endl;
		else
			cout << round(a * 1.0/b) << endl;
	}
	return 0;
} 
