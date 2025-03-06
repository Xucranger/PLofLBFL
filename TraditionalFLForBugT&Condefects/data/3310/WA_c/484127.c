#include<stdio.h>
#include<math.h>
float m;
int main(){
	for(int i=0;i<3;i++){
	int n;
	scanf("%d",&n);
	m =sin(n);
	float F_(int x);
	printf("%.6f",F_(n));
	return 0;
}
}
float F_(int x){
	if(x==0)
	return m;
	else
	return sin(F_(x-1));
}
