#include <stdio.h> 
int main(){
	float n,m;
	while(scanf("%f%f",&n,&m) != EOF){
		if(m == 0){
			printf("error\n");
		}else{
			printf("%d\n",(int)(n/m+0.5));
		}
	}
	return 0;
}
