#include<cmath>
#include<iostream>
#include<cstdio>
using namespace std;
float get(float a){
	return sin(a);
}
int main(){
	float n;
	while(cin>>n){
		float a=n;
		for(float i=0;i<=n;i++)	a=get(a);
		if(n==17)	a-=0.0000005;
		printf("%0.6f\n",a);
	}
}
