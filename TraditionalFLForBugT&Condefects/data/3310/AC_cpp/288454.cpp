#include <iostream>
#include "stdio.h"
#include "math.h"
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double n;
double fun(double num);
int main(int argc, char** argv) {
	while (cin >> n){
		printf("%.6f\n", fun(n));
	}
	return 0;
}
double fun(double num){
	if (num == 0){
		return sin(n);
	}
	return sin(fun(num - 1));
}
