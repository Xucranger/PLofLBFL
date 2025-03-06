#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
		if(b==0){
			printf("error\n");
		}
		else{
			int s;
			printf("%d\n",a/b);
		}
	}
} 
