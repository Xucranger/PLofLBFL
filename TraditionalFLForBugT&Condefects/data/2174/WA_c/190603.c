#include<stdio.h>
int main(void){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0) printf("error\n");
		else printf("%.0f\n",a/(b*1.0));
	}
	return 0;
}
