#include <iostream>
using namespace std;
int main(){
	double a,b;
	while(cin >> a >> b){
		if(b != 0){
			cout << (int)(a/b + 0.5) << endl;
		}else{
			cout << "error" << endl;
		}
	}
	return 0;
} 
