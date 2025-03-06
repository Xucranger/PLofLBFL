#include<stdio.h>
int main(void){
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF){
		if(b==0) printf("error\n");
		else printf("%d\n",(int)(a/b+0.5));
	}
	return 0;
}
