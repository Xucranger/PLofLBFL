#include<stdio.h>
int main(void){
	int a,b;
	float x;
	while(scanf("%d %d",&a,&b)!=EOF){
		x=a/(b*1.0);
		if(b==0) printf("error\n");
		else printf("%d\n",(int)(x+0.5));
	}
	return 0;
}
