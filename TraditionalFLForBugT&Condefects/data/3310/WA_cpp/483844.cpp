#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double F(int x , int n){
	int n1 = n;
	if(x != 0){
	return sin(F(x-1, n1));
	}
	else{
		return sin(n1);
	}
}
int main(){	
	int num1, num2, num3;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cout <<setiosflags(ios::fixed)<<setprecision(6)<< F(num1,num1)<<endl;
	cout <<setiosflags(ios::fixed)<<setprecision(6)<< F(num2,num2)<<endl;
	cout <<setiosflags(ios::fixed)<<setprecision(6)<< F(num3,num3)<<endl;
}
