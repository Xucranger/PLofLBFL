#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(b==0) printf("error\n");
		else{
			int base;
			base=a/b;
			if(a%b*2>b||a%b*2==b) base++;
			printf("%d\n",base);
		}
	}
	return 0;
}
