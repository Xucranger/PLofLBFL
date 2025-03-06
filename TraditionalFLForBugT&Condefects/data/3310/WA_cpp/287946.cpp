#include<stdio.h>
#include<math.h>
float Fx(float n){
	float temp,s;
	int i=1;
	if(n==0)
	return sin(n);
	else{
		s=sin(n);
		while(i<=n){
			temp=sin(s);	
			s=temp;
			i++;
		}
		return temp;
	}
}
int main(){
	float n,result;
	while(~scanf("%f",&n)){
		result=Fx(n);
		printf("%.6f\n",result);
	}
	return 0;
}
