#include<stdio.h>
int main(){
	int a,b;
	int c;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(!b)
		printf("error\n");
		else{
			c=(a+(b/2))/b;
			printf("%d\n",c);
		}
	}
} 
