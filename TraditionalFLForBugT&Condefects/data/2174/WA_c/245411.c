#include <stdio.h>
int main(){
	double a,b;
	while(scanf("%lf %lf",&a,&b)!=EOF){
		if(b==0){
			printf("error");
			continue;
		}
		double ret=a/b;
		int ret1=ret*10;
		if(ret1%10>=5){
			printf("%d",(int)ret+1);
		}else{
			printf("%d",(int)ret);
		}
	}
	return 0;
}
