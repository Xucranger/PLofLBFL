#include<math.h>
#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b == 0) printf("error\n");
		else{
		double c = double(a)/b;
		c = floor(c+0.5);
		printf("%.0f\n",c);
		}
		}
		}
