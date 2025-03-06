#include <stdio.h>
int main(){
	double a,b;
	while(scanf("%lf %lf",&a,&b)!=EOF){
		if(b==0){
			printf("error\n");
			continue;
		}
		double ret=a/b;
		int ret1=ret*10;
		if(ret1%10>=5){
			printf("%d\n",(int)ret+1);
		}else{
			printf("%d\n",(int)ret);
		}
	}
	return 0;
}
